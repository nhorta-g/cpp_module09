/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:19:52 by nuno              #+#    #+#             */
/*   Updated: 2024/04/03 12:19:53 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: please provide a single expression" << std::endl;
		return EXIT_FAILURE;
	}

	RPN rpn(argv[1]);
	rpn.calculate();

	// {
	// 	RPN rpn2;
	// 	rpn2.setExpression(argv[1]);
	// 	rpn2.calculate();
	// }
	return 0;
}