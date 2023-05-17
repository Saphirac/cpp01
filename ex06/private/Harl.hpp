/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:30:13 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/17 17:52:04 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl;

typedef void				(Harl::*t_func)(void) const;
typedef struct s_complain	t_complain;

struct s_complain
{
	int					lvl_number;
	std::string const	str;
	t_func const		func;
};

class Harl	{
private:
	static	t_complain	__lookup[];

	void	debug() const;
	void	info() const;
	void	warning() const;
	void	error() const;
public:
	Harl();
	~Harl();
	void	complain(std::string const &level) const;
};

#endif
