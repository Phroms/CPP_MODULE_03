/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:35:33 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:35:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap: " << _name << "Called first constructor" << std::endl;
    _hitpoint = 100;
    _energy_point = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap: " << _name << " \033[33mCalled second constructor\033[0m" << std::endl;
    _hitpoint = 100;
    _energy_point = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
    this->_hitpoint = cpy._hitpoint;
    this->_energy_point = cpy._energy_point;
    this->_attack_damage = cpy._attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitpoint = rhs._hitpoint;
        this->_energy_point = rhs._energy_point;
        this->_attack_damage = rhs._attack_damage;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: " << _name << " \033[34mFives Guys\033[0m" << std::endl;  
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: " << _name << " \033[33mCalled destructor\033[0m" << std::endl;
}