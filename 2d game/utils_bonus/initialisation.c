/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebban <asebban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:37:35 by asebban           #+#    #+#             */
/*   Updated: 2025/02/20 10:40:18 by asebban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long_bonus.h"

int	initialisation(t_game *game)
{
	game->keyboard[BACK] = 0;
	game->keyboard[RED_BUTTON] = 0;
	game->keyboard[ESC] = 0;
	game->keyboard[LEFT] = 0;
	game->keyboard[RIGHT] = 0;
	game->keyboard[ADVANCE] = 0;
	game->bpp = 0;
	game->dropbomb = 0;
	game->casein = 0;
	game->spritebomb = 5;
	game->casetotal = 0;
	game->y = 0;
	game->x = 0;
	game->collectible = 0;
	game->collectibletotal = 0;
	game->s_line = 0;
	game->maptofree = -1;
	game->move = 0;
	game->playerset = 0;
	game->collectibleset = 0;
	game->exitset = 0;
	game->lastplayer_x = -1;
	game->lastplayer_y = -1;
	game->mlx_ptr = NULL;
	return (0);
}