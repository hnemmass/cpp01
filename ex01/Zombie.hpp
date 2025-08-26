/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:38:28 by hnemmass          #+#    #+#             */
/*   Updated: 2025/08/25 17:51:27 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void name_zombies(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif