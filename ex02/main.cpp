/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:18:04 by nuno              #+#    #+#             */
/*   Updated: 2024/04/03 12:18:09 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: usage" << std::endl;
		return EXIT_FAILURE;
	}

	std::vector<std::string> numbers;
	for (int i = 1; argv[i]; i++)
		numbers.push_back(argv[i]);
	PmergeMe m(numbers);
	m.merge();
}