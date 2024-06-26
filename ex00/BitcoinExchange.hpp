/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:10:40 by nuno              #+#    #+#             */
/*   Updated: 2024/04/03 12:10:52 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <map>
# include <string.h>
# include <string>
# include <cstring>
# include <fstream>
# include <ctime>

# define debug(x) std::cout << x << std::endl;

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(std::string db, std::string infile);
		// BitcoinExchange(const BitcoinExchange &obj);
		// BitcoinExchange &operator=(const BitcoinExchange &obj);
		~BitcoinExchange();

		void buildDataBase();
		void engine();
		void displayMap();

		void setInfile(std::string infile);
		void setDB(std::string db);

		// EXCEPTIONS
		class FileOpenException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class DBInvalidDateException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class DBInvalidRateException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class DBIncompleteDataException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::map<std::string,float> _data;
		std::ifstream _infile;
		std::ifstream _db;

		static bool validDate(std::string date);
		static bool validRate(std::string rate);
		static bool validInputFactor(std::string factor);
};

#endif
