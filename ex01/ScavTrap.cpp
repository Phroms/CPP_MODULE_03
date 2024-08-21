/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:46:29 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/20 18:46:30 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitpoint = 100;
    _energy_point = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[33mScavTrap Calling name constructor\033[0m" << std::endl;
    _hitpoint = 100;
    _energy_point = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
    this->_hitpoint = cpy._hitpoint;
    this->_energy_point = cpy._energy_point;
    this->_attack_damage = cpy._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    if (this != &rhs) // evita la autoasignacion
    {
        this->_name = rhs._name;
        this->_hitpoint = rhs._hitpoint;
        this->_energy_point = rhs._energy_point;
        this->_attack_damage = rhs._attack_damage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitpoint <= 0)
        std::cout << _name << "the robot no tiene vida" << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << _name << "the robot 0000 vida" << std::endl;
    else
    {
        std::cout << "ScavTrap " << _name
                  << " \033[35mattacks\033[0m " << target
                  << " causing " << _attack_damage
                  << " points of damage!" << std::endl;
        this->_energy_point -= 1;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << _name << " \033[34mgo into gate guard mode\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[33mCalled destructor\033[0m" << std::endl;
}