/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:35:56 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:35:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap Zeus("Zeus");
    ClapTrap Athena("Athena");
    ClapTrap unnameBot("");
    ClapTrap CpyZeus(Zeus);

    Zeus.attack("Athena");
    Athena.takeDamage(5);
    Athena.attack("Zeus");
    Zeus.takeDamage(5);
    Zeus.beRepaired(5);
}