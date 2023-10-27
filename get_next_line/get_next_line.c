/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:47:03 by yude-oli          #+#    #+#             */
/*   Updated: 2023/10/27 17:33:18 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h> 

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			flag;
	int			read_result;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= FOPEN_MAX)
		return (buffer_total_clear(fd, (char **)buffer, line));
	while (1)
	{
		if (buffer[0] == '\0')
		{
			read_result = read(fd, buffer, BUFFER_SIZE);
			if (read_result == -1)
				return (buffer_total_clear(fd, NULL, line));
			if (read_result == 0)
				return (line);
		}
		flag = line_updater(&line, buffer);
		buffer_clear(buffer);
		if (flag == 1)
			return (line);
		if (flag == -1)
			return (NULL);
	}
}
/*
int	main(void)
{
	char	*line;
	int		fd1;


	fd1 = open("texto", O_RDONLY);
	if (fd1 == -1)
	{
		perror("Error opening file");
		return (1);
	}
    while ((line = get_next_line(fd1)) != NULL) {
        printf("line: %s", line);
        free(line);
    }    
	close(fd1);
    return (0);
}*/
