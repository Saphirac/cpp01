/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 04:18:07 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:32:37 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
private :

	std::string _name;

public :

	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	announce() const;
	void	newName(std::string name);
};

#endif
