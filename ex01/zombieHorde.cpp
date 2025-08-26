/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:57:27 by hnemmass          #+#    #+#             */
/*   Updated: 2025/08/25 17:51:34 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *z = new Zombie[N];

	if (i < 0)
		return (NULL);
	while(i < N)
	{
		z[i].name_zombies(name);
		i++;
	}
	return(z);
}
