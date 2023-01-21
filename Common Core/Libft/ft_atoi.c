/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:25:51 by ppezzull          #+#    #+#             */
/*   Updated: 2022/10/31 11:31:30 by ppezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	m;
	int	i;
	int	num;

	i = 0;
	m = 1;
	num = 0;
    if (str[0] == '-')
    {
        m = -m;
        i++;
    }
	while (str[i] >= '0' && str[i] <= '9')
	{               
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (m * num);
}
