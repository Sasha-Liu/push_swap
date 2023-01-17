/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:30:44 by sasha             #+#    #+#             */
/*   Updated: 2023/01/17 15:38:20 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

//read from stdin and return the string
char	*ft_read_stdin(void)
{
    char	*input;

	input = malloc(sizeof(char));
	if (input == NULL)
	{
		write(2, "malloc fails\n", 16);
		return (NULL);
	}
	*input = '\0';
	if (ft_read(&input) == -1)
	{
		free(input);
		return (NULL);
	}
	return (input);
}

//return -1 when error
int	ft_read(char **input)
{
	char	buf[2];
	char	*temp;
	int		ret;

	buf[1] = '\0';
	while (1)
    {
		ret = read(0, buf, 1);
		if (ret == 0)
			break ;
		if (ret == -1)
		{
			write(2, "read error\n", 11);
			return (-1);
		}
		temp = ft_strjoin(*input, buf);	
        free(*input);
		*input = temp;
    }
	return (1);
}