/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:19:22 by nuno              #+#    #+#             */
/*   Updated: 2024/04/03 13:21:15 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return EXIT_FAILURE;
	}
	std::ifstream in_file;
	try {
		BitcoinExchange btc("data.csv", argv[1]);
		btc.buildDataBase();
		btc.engine();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}