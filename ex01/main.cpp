/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:35:46 by hnemmass          #+#    #+#             */
/*   Updated: 2025/08/25 18:35:23 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i = 0;
	int number_z = 5;

	Zombie *zombies = NULL;
	zombies = zombieHorde(number_z, "bOooooo");
	while(i < number_z)
		zombies[i++].announce();
	delete[] zombies;
}
