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

# include "ClapTrap.hpp"

int main()
{
    ClapTrap Zeus("Zeus");
    ClapTrap Athena("Athena");
    ClapTrap unnamebot("");
    ClapTrap cpyZeus(Zeus);

    Zeus.attack("Athena");
    Athena.takeDamage(10);
    Athena.attack("Zeus");
    Zeus.takeDamage(10);
    Zeus.beRepaired(10);
    return (0);
}