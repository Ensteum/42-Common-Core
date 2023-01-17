/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:13:59 by ppezzull          #+#    #+#             */
/*   Updated: 2023/01/16 16:14:05 by ppezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(char letter)
{
    return (letter >= 'a' & letter <= 'z' || letter >= 'A' & letter <= 'Z' );
}

// int main()
// {
//     int test = 'p';
//     printf("%i\n", ft_isdigit(test));
//     printf("%i", ft_isdigit(test));
//     printf("\n");
// }
