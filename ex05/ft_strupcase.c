/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:17:30 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/22 14:21:32 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{

	int i;
	i = 0;
	while(str[i] ! + '\0')
	{
		if(str[i] >= 'a' & str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}