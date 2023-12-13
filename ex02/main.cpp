/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:54:24 by ndesprez          #+#    #+#             */
/*   Updated: 2023/12/13 16:46:52 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	str = "HI THIS IS BRAIN"; //var str
	std::string *stringPTR = &str; //pointer PTR to the adress of var str - PTR = &str
	std::string &stringREF = str; //reference REF to var str - REF = str

	std::cout << "Adress of str                 : " << &str << std::endl; //address of var str = &str
	std::cout << "Adress held by stringPTR      : " << stringPTR << std::endl; //value of PTR - PTR = &str
	std::cout << "Adress held by stringREF      : " << &stringREF << std::endl; //address of REF - &REF = &str
	std::cout << "Value of str                  : " << str << std::endl; //value of var str
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl; //value pointed to by PTR - *PTR = *&str = str
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl; //value of REF - REF = str
	return 0;
}
