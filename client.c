/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:55 by sallorca          #+#    #+#             */
/*   Updated: 2023/03/03 16:16:34 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send(int pid, char byte)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((byte & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

void	ft_message(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("Message received");
}

int	main(int argc, char **argv)
{
	int					i;
	int					pid;
	struct sigaction	sing;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		sing.sa_handler = &ft_message;
		sigaction(SIGUSR1, &sing, NULL);
		while (argv[2][i])
		{
			ft_send(pid, argv[2][i]);
			i++;
		}
		ft_send(pid, argv[2][i]);
	}
	else
	{
		ft_printf("WRONG FORMAT TRY WITH: ./client \"PID\" \"message\"\n");
	}
	return (0);
}
