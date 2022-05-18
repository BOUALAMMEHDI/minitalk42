/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:13:19 by mboualam          #+#    #+#             */
/*   Updated: 2022/05/18 01:21:58 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


int	main(int argc, char **argv)
{
	int	pid;
	int	i;
	int	bit;

	i = 0;
	if (argc != 3)
		return (ft_putstr("\033[32m [put 3 arguments] \033[0m \n"), 0);
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		return (ft_putstr("\033[32m WRONG PID \033[0m \n"), 0);
	while (argv[2][i])
	{
		bit = 0;
		while (bit < 8)
		{
			if ((argv[2][i] >> bit) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(200);
			bit++;
		}
		i++;
	}
	return (0);
}
