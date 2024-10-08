/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:05:12 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/19 16:05:14 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
    ClapTrap Zeus("Zeus");
    ClapTrap Athena("Athena");
    ClapTrap unnameBot("");
    ClapTrap cpyZeus(Zeus);

    Zeus.attack("Athena");
    Athena.takeDamage(5);
    Athena.attack("Zeus");
    Zeus.takeDamage(5);
    Zeus.beRepaired(5);
}
/*int main()
{
    std::string mensajito = "funcionaaaaaa";

    mensaje(mensajito);
    return (0);
}*/