/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opochuev <opochuev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:51:45 by opochuev          #+#    #+#             */
/*   Updated: 2024/03/13 12:05:49 by opochuev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//taking line
//find \n o finish
//substr save strinf from i+1(after \n)
//strlen - \name
//save it in store
char	*free_store(char *buffer)
{
	char		*store;
	ssize_t		i;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	if (buffer[i] == 0 || buffer[1] == 0)
		return (NULL);
	store = ft_substr(buffer, i + 1, ft_strlen(buffer) - i);
	if (!store)
		return (NULL);
	if (*store == 0)
	{
		free(store);
		store = NULL;
	}
	return (store);
}

//read text by 3 symbols&save in buffer
//add \0 for making string
//join with store
//if read is zero o \n break
//safe in store
char	*read_extract_line(int fd, char *store, char *buffer, int *info)
{
	char		*temp;
	ssize_t		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(store);
			return (*info = 0, NULL);
		}
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = 0;
		temp = store;
		store = ft_strjoin(temp, buffer);
		free(temp);
		if (!store)
			return (*info = 0, NULL);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (store);
}

//find \n
//save new string before it
char	*cut_line(char *line, int *info)
{
	char	*nw_line;
	int		i;

	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\n')
		i++;
	nw_line = ft_substr(line, 0, i);
	if (nw_line == NULL)
		return (*info = 0, free(line), NULL);
	free(line);
	return (nw_line);
}

//read per 3 symbols & save in line
//ostatok in store is static 
//for next call gnl
//save in live first part of string before n

char	*get_next_line(int fd)
{
	static char	*store;
	char		*line;
	char		*buffer;
	int			info;

	info = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (free(store), free(buffer), store = NULL, buffer = NULL, NULL);
	if (!buffer)
		return (free(store), store = NULL, NULL);
	line = read_extract_line(fd, store, buffer, &info);
	free(buffer);
	if (!info)
		return (store = NULL, NULL);
	buffer = NULL;
	if (!line)
		return (NULL);
	store = free_store(line);
	line = cut_line(line, &info);
	if (!info)
		return (free(store), store = NULL, NULL);
	return (line);
}
//cicle till end of file
//fd have open&close funcion
//if not possible open return -1
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <nombre_archivo>\n", argv[0]);
        return 1;
    }

    int fd;
    char *line;
    int count;

    count = 0;
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        printf("Error opening file");
        return 1;
    }
    while (1)
    {
        line = get_next_line(fd);
        if (line == NULL)
            break;
        count++;
        printf("Line %d: %s\n", count, line);
        free(line);
        line = NULL;
    }
    close(fd);
    return (0);
}