/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:35:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/08/21 19:35:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& cpy);
        FragTrap &operator=(const FragTrap &rhs);
        void highFivesGuys(void);
        ~FragTrap();
};

#endif