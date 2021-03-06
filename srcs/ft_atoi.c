/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marezgui <marezgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 23:26:48 by marezgui          #+#    #+#             */
/*   Updated: 2018/11/11 10:47:41 by marezgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/../includes/libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int flag;
	int result;

	i = 0;
	flag = 1;
	result = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
			|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-')
		flag = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (result * flag);
		result = result * 10 + (str[i++] - 48);
	}
	return (result * flag);
}
