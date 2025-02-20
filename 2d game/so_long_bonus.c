/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <asebban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:25:32 by asebban           #+#    #+#             */
/*   Updated: 2025/02/20 10:46:46 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long_bonus.h"

int main(int ac, char **av)
{
    t_game  game;
    initialisation(&game);
    if (handle_errors(ac, av[1]))
		return (1);
    parsing(&game, av[1]);
}