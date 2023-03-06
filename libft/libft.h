/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallorca <sallorca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:12:02 by sallorca          #+#    #+#             */
/*   Updated: 2022/10/17 13:49:24 by sallorca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//Crea un nuevo nodo utilizando malloc(3).
//La variable miembro ’content’ se inicializa
//con contenido del parámetro ’content'.La variable ’next’, con NULL.
t_list	*ft_lstnew(void *content);
//Añade el nodo ’new’ al principio de la lista ’lst’
void	ft_lstadd_front(t_list **lst, t_list *new);
//Cuenta el número de nodos de una lista
int		ft_lstsize(t_list *lst);
//Devuelve el ultimo nodo de la lista.
t_list	*ft_lstlast(t_list *lst);
//Añade el nodo ’new’ al final de la lista ’lst’
void	ft_lstadd_back(t_list **lst, t_list *new);
//Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando
// la función ’del’ dada como parámetro, además de liberar el nodo.
//  La memoria de ’next’ no debe liberarse.
void	ft_lstdelone(t_list *lst, void (*del)(void*));
//Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
//utilizando la función ’del’ y free(3).
//Al final, el puntero a la lista debe ser NULL.
void	ft_lstclear(t_list **lst, void (*del)(void*));
//Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo
void	ft_lstiter(t_list *lst, void (*f)(void*));
//Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. 
//Crea una lista resultante de la aplicación correcta y sucesiva de la función 
//’f’ sobre cada nodo.La función ’del’ se utiliza para eliminar
//el contenido de un nodo, si hace falta.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));

//Comprueba si es un caracter alfabetico, devolviendo un entero V(1) ó F(0).
int		ft_isalpha(int c);
// Comprueba si es un entero de caracter digital, devuelve entero V(1) ó F(0).
int		ft_isdigit(int c);
// Comprueba si es un caracter alfanumerico, devuelve entero V(1) ó F(0).
int		ft_isalnum(int c);
// Comprueba si es un caracter de la tabla ascii, devuelve entero V(1) ó F(0).
int		ft_isascii(int c);
//Comprueba si es un caracter imprimible de la ascii, devuelve V(1) ó F(0).
int		ft_isprint(int c);

// Devuelve la longitud total de mi string.
size_t	ft_strlen(const char *s);
// Copia src a dst con tamaño 'x' y nos devuelve la longitud de src.
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
// Concatena src EN dst(dependiendo del size que demos) devuelve lent(des+src).
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
// Devuelve la dirección de la primera coincidencia de 'c' con 's'.
char	*ft_strchr(const char *s, int c);
//Devuelve la dirección de la 1ª coincidencia desde el final de 's' con 'c'.
char	*ft_strrchr(const char *s, int c);
// Compara 2 string, devuelve (-1 si el char es menor), (1 si mayor), (0 igual).
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//Busca la aguja(nee) en el pajar(hay).
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// Cambia una variable string de tipo entero a caracter.
int		ft_atoi(const char *str);
// Sustituye len bytes en mi str b, con valor c.
void	*ft_memset(void *b, int c, size_t len);
// sustituye por 0 la cantidad de bytes que le diga.
void	ft_bzero(void *s, size_t n);
// Esta función devuelve un puntero al puntero str1 almacén de destino
void	*ft_memcpy(void *dst, const void *src, size_t n);
// Esta función devuelve un puntero al puntero str1 almacén de destino
void	*ft_memmove(void *dst, const void *src, size_t len);
// devuelve mayusculas en C
int		ft_toupper(int c);
// devuelve minusculas en C
int		ft_tolower(int c);
//Devuelve un puntero a un puntero al byte que concuerda
//si no aparece en un área determinada de la memoria, devuelve NULL
void	*ft_memchr(const void *s, int c, size_t n);
//devuelve si, s1=s2, s1<s2 o s1>s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// Reserva un espacio en la memoria dinamica del nº de bytes que le indiquemos.
void	*ft_calloc(size_t count, size_t size);
// Reserva memoria para hacer una copia de s1 en s2 y devuelve puntero s2.
char	*ft_strdup(const char *s1);
// devuelve una substring del string s. 
// con tamaño len empezando por posición start.
char	*ft_substr(char const *s, unsigned int start, size_t len);
//Reserva (con malloc(3)) y devuelve una nueva string,
// formada por la concatenación de ’s1’ y ’s2’.
char	*ft_strjoin(char const *s1, char const *s2);
//Elimina todos los caracteres de la string ’set’ desde el principio 
//y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’
//La string resultante se devuelve con una reserva de malloc(3
char	*ft_strtrim(char const *s1, char const *set);
//reserva un array de string resultante de sepaarar 's' en substring
//usando 'c' como separador.
char	**ft_split(char const *s, char c);
//transforma un numero entero de string a un string de caracteres
char	*ft_itoa(int n);
//función que itera a otra función
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//aplica a cada caracter del string la función 'f' 
//y genera un nuevo string con el uso sucesifo de 'f'.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//envía el caracter 'c' al file descriptor especifico.
void	ft_putchar_fd(char c, int fd);
// envia el string 's' al file descriptor especificado.
void	ft_putstr_fd(char *s, int fd);
// envía la string 's' al file descriptor dado, seguido de un salto de linea
void	ft_putendl_fd(char *s, int fd);
//envía el numero 'n' al file descriptor dado.
void	ft_putnbr_fd(int n, int fd);

#endif // LIBFT_H
