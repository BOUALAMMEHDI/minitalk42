/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:34:36 by mboualam          #+#    #+#             */
/*   Updated: 2022/05/11 09:53:03 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb % 10 + '0');
}

int	ft_atoi(const char *s1)
{
	int	result;
	int	i;
	int	signe;

	i = 0;
	signe = 1;
	while ((s1[i] >= 9 && s1[i] <= 13) || s1[i] == ' ')
		i++;
	if (s1[i] == '-' || s1[i] == '+')
	{
		if (s1[i] == '-')
			signe *= -1;
		i++;
	}
	result = 0;
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		result = (result * 10) + (s1[i] - '0');
		i++;
	}
	return (result * signe);
}
