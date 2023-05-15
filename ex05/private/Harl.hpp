/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:30:13 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/15 13:35:20 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class harl	{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	harl();
	~harl();
	void	complain(std::string level);
};

#endif
