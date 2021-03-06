/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daugier <daugier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 22:35:33 by daugier           #+#    #+#             */
/*   Updated: 2015/10/31 02:06:05 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1[i] && s2[i]))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
