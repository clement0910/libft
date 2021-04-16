/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_time.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csapt <csapt@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 23:01:03 by csapt             #+#    #+#             */
/*   Updated: 2021/01/09 11:16:20 by csapt            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TIME_H
# define LIBFT_TIME_H

# include <sys/time.h>
# include <stdbool.h>

typedef struct s_timer
{
	unsigned long	ref_time;
	unsigned long	elapsed_time;
	bool			pause;
}				t_timer;

typedef struct s_frame
{
	int				fps;
	int				lastfps;
	t_timer			timer;
}				t_frame;

unsigned long		get_time(void);
void				timer_restart(t_timer *timer);
unsigned long		timer_get_microseconds(t_timer *timer);
unsigned long		timer_get_milliseconds(t_timer *timer);
double				timer_get_seconds(t_timer *timer);

#endif
