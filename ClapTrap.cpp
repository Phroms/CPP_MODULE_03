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

std::string mensaje(std::string msg)
{
    msg = "Funciona :D";

    std::cout << msg << "\nImprimio el mensaje" << std::endl;
    return (msg);
}