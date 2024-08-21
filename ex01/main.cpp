/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:46:49 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/20 18:46:50 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main()
{
    ClapTrap Zeus("Zeus");
    ClapTrap Athena("Athena");
    ScavTrap MercX("MercX");

    Zeus.attack("Athena");
    Athena.takeDamage(5);
    Athena.attack("Zeus");
    Zeus.takeDamage(5);
    Zeus.beRepaired(5);

    MercX.guardGate();
    MercX.attack("Athena");
    Athena.takeDamage(20);
    Athena.attack("MerX");
    return (0);
}