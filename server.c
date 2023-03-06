/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:13:03 by sallorca          #+#    #+#             */
/*   Updated: 2023/03/03 16:26:13 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int sig, siginfo_t *info, void *ucont)
{
	static unsigned char	byte;
	static int				bit;

	(void)ucont;
	if (sig == SIGUSR1)
		byte |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		if (byte == '\0')
		{
			ft_printf("\n");
			kill(info->si_pid, SIGUSR1);
		}
		else
			ft_printf("%c", byte);
		byte = 0;
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction	sing;

	sing.sa_sigaction = &ft_handler;
	sing.sa_flags = SA_SIGINFO;
	sigemptyset(&sing.sa_mask);
	sigaddset(&sing.sa_mask, SIGUSR1);
	sigaddset(&sing.sa_mask, SIGUSR2);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sing, NULL);
		sigaction(SIGUSR2, &sing, NULL);
		pause();
	}
	return (0);
}
