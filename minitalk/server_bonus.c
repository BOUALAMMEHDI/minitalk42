/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:41:13 by mboualam          #+#    #+#             */
/*   Updated: 2022/05/18 01:23:01 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler(int sig)
{
	static int			size;
	static char			to_print;

	to_print += ((sig % 2) << size);
	size++;
	if (size == 8)
	{
		ft_putchar(to_print);
		if (!to_print)
			ft_putchar('\n');
		to_print = 0;
		size = 0;
	}
}

int	main(void)
{
	ft_putstr("get id => \n");
	ft_putnbr(getpid());
	ft_putchar('\n');
	ft_putstr("\033[1;32m");
	ft_putstr("waiting...");
	ft_putchar('\n');
	ft_putstr("\033[0m");
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
