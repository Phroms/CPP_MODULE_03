/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:35:10 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:35:12 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap: " << _name << "first constructor" << std::endl;
    _hitpoint = 100;
    _energy_point = 100;
    _attack_damage = 30;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap: " << _name << "Second constructor" << std::endl;
    _hitpoint = 100;
    _energy_point = 100;
    _attack_damage = 30;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
    this->_hitpoint = cpy._hitpoint;
    this->_energy_point = cpy._energy_point;
    this->_attack_damage = cpy._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitpoint = rhs._hitpoint;
        this->_energy_point = rhs._energy_point;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitpoint <= 0)
        std::cout << "ScavTrap: " << _name << "tiene 0 de vida" << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << "ScavTrap: " << _name << "tambien tiene 0 de vida" << std::endl;
    else
    {
        std::cout << "ScavTrap " << _name
                  << " attacks " << target
                  << " causing " << _attack_damage
                  << " points of damage!" << std::endl;
        this->_energy_point -= 1;
    }
}

void ScavTrap::guarGate()
{
    std::cout << "ScavTrap: " << _name << "Guardian de la puerta" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: " << _name << "called destructor" << std::endl;
}