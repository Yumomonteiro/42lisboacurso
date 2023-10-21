/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:40:00 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/21 16:28:43 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
} t_list;

void    create_list(t_list **list, int fd);

void	append(t_list **list, char *buf);

char *get_next_line(int fd);

char	*get_line(t_list *list);

void    polish_list(t_list **list);

int found_newline(t_list *list);

t_list  *lst_last_node(t_list *list);

void    copy_str(t_list *list, char *str);

int	len_to_newline(t_list *list);

void	dealloc(t_list **list, t_list *clean_node, char *buf);











#endif