/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:59:49 by ghuertas          #+#    #+#             */
/*   Updated: 2022/10/20 20:31:10 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <stdio.h>

# define IMG_SIZE 64

/*_____TILES_____*/
typedef enum e_tile_type
{
	EMPTY = '0',
	WALL = '1',
	COLLECTABLE = 'C',
	PLAYER = 'P',
	ENEMY = 'E',
	FOLLOWER = 'F'
}	t_tile_type;
/*____STRUCT FOR EACH ONE__*/
typedef struct s_tile
{
	t_tile_type	type;
	t_tile_type	og_type;
	struct	s_tile	*up;
	struct	s_tile	*down;
	struct	s_tile	*left;
	struct	s_tile	*right;
};	t_tile;
/*___IMAGES_____*/
typedef struct s_wall_img
{
	void	*block;
	void	*up_left;
	void	*up_rigth;
	void	*up;
	void	*right;
	void	*left;
	void	*down_right;
	void	*down;
	void	*down_left;
};	t_wall_img;
/*___COLLECTABLES___*/
typedef	struct	s_coll_img
{
	void	*current_img;
	int		anim_frames;
	void	*img_0;
	void	*img_1;
}	t_collect_img;

/* An image that covers the whole window */
/* Color */
/* Enemies */
/* Enemies animation */
/* Make a list of enemies */
/* Game */
/* Imput keys */
/* about player */
/* Game running */
/* Functions to play */

#endif