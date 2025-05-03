/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedApp.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:57:38 by tamatsuu          #+#    #+#             */
/*   Updated: 2025/05/03 21:10:56 by tamatsuu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDAPP_HPP
#define SEDAPP_HPP

#include "FileOperator.hpp"

#define INVALID_ARG_NUM "Invalid argument number. Argment should be 3"
#define FAILURE 1

class SedApp {
	public:
		SedApp();
		~SedApp();
		int run(int argc, char *argv[]);
	private:
		int write_err(std::string err);
};

#endif 