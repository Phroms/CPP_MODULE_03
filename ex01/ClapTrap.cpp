/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:45:48 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/20 18:45:50 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("Unknow"), _hitpoint(10), _energy_point(10), _attack_damage(0)
{
    std::cout << "ClapTrap: "<<_name << " \033[91mmurder begins\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitpoint(10), _energy_point(10), _attack_damage(0)
{
    if (name.empty())
        this->_name = "Ares";
    std::cout << "ClapTrap: " << _name << " \033[91mmurder begins\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    this->_name = cpy._name;
    this->_hitpoint = cpy._hitpoint;
    this->_energy_point = cpy._energy_point;
    this->_attack_damage = cpy._attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    this->_name = rhs._name;
    this->_hitpoint = rhs._hitpoint;
    this->_energy_point = rhs._energy_point;
    this->_attack_damage = rhs._attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "Can no longer attack, has 0 life." << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << "ClapTrap: " << _name << "Does not have enough energy to attack." << std::endl;
    else
    {
        std::cout << "Claptrap " << _name
                  << " \033[35mattacks\033[0m " << target
                  << " causing " << _attack_damage
                  << " points of damage!. " << std::endl;
        this->_energy_point -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life, you cant attack." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name 
                  << " \033[32mtake\033[0m " << amount 
                  << " points of damage!. " << std::endl;
        this->_energy_point -= 1;

    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoint <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 life and cannot be recovered." << std::endl;
    else if (this->_energy_point <= 0)
        std::cout << "ClapTrap: " << _name << "has 0 energy, cannot be recovered." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name
                  << " \033[32mtake\033[0m " << amount
                  << " points of reapaired. " << std::endl;
        this->_hitpoint += amount;
        this->_energy_point -= 1;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[30mAre u crazy??, Im dead xP!\033[0m" << std::endl;
}