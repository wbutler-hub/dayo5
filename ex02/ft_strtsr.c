/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtsr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:35:33 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/22 13:57:28 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find )
{
	int i;
	int j;
	i = 0;
	while(str[i] ! = '\0')
	{
		j = 0;
		while(to -find[j] == str[i + j])
		{
			if(to_find[j + 1] == '\0')
			{
				return(str = j);
			}
			j++;
		}
		i++;
	}
	return 0;
}

