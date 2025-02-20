/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <asebban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:15:51 by asebban           #+#    #+#             */
/*   Updated: 2025/02/17 15:20:28 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void f()
{
	system("leaks so_long");
}

int	main(int ac, char **av)
{
	atexit(f);
	t_game	game;

	if (handle_errors(ac, av[1]))
		return (1);
	if (!setup_game(&game, av[1]))
		return (1);
	setup_hooks(&game);
	mlx_loop(game.mlx);
	clean_game(&game);
	return (0);
}
