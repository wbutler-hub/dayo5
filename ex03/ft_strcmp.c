/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:42:34 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/22 13:50:42 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *sr1, char *s2)
{
	int i;
	i = 0;

	while(s1[i] == s2[i] && s1[i] ! = '\0' && s2[i] ! = '\0')
	{
		i++;
		return(s1[i] - s2[i]);
	}
}
