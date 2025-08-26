/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:30:03 by hnemmass          #+#    #+#             */
/*   Updated: 2025/08/26 03:23:28 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string name;
	public:
		Weapon	weapon;
		HumanA(Weapon w);
		~Huaman_A();
		std::string attack();
};

#endif