/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:34:48 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:34:50 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitpoint;
        int         _energy_point;
        int         _attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& cpy);
        ClapTrap &operator=(const ClapTrap &rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif