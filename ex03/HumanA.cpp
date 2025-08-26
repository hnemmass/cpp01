/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:34:40 by hnemmass          #+#    #+#             */
/*   Updated: 2025/08/26 03:27:42 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon w)
{
	
}

// HumanA::attack(HumanA::Weapon w)
// {
// }

std::string HumanA::attack()
{
	std::cout << name << " attacks with their " << Weapon << std::endl;
}