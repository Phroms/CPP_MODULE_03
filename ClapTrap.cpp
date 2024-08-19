/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:04:50 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/19 16:04:51 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() //constructor por defecto, inicializa todos los mienbros
{
    _name = "no se";
    _hitpoints(10);
    _energy_points(10);
    _attack_damage(0);
    
    std::cout << "primer constructor empezado" << std::endl;
}

ClapTrap::ClapTrap(std::string name) //constructor con parametro, inicializa los mienbros
{                                    // pero este constructor acepta un nombre
    if (name.empty())                // si el nombre esta vacio, asignale uno.
        this->_name = "Nombre";
    _name(name);
    _hitpoints(10);
    _energy_points(10);
    _attack_damage(0);
    std::cout << "segundo constructor empezado" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy) // constructor de copia
{
    this->_name = cpy._name;                   // todo este el contenido de este constructor
    this->_hitpoints = cpy._hitpoints;         // se llama
    this->_energy_points = cpy._energy_points; // "deep copy" -> es mejor usar este cpy
    this->_attack_damage = cpy._attack_damage; // porque vas mienbro a mienbro   
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) // constructor de operador de copia
{                                                  // aqui le decimos que es todo lo que
    this->_name = rhs._name;                       // puede copiar.
    this->_hitpoints = rhs._hitpoints;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return *this;
}

void ClapTrap::attack(const string::string& target)
{
    //imprimir mensaje explicando el proceso
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

ClapTrap::~ClapTrap()
{
    std::cout << "Llamado de destructor" << std::endl;
}
/*std::string mensaje(std::string msg)
{
    msg = "Funciona :D";

    std::cout << msg << "\nImprimio el mensaje" << std::endl;
    return (msg);
}*/