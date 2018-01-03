
/*!
	\file
	\brief Header file print.hpp
	Declaration
*/
#include <string>
#include <fstream>
#include <iostream>

/*!
Function print (1)
\param[in] text variable for input
\param[in] out  variable for output
*/
void print(const std::string& text, std::ostream& out = std::cout);
/*!
Function print (2)
\param[in] text variable for input
\param[in]  out variable for output
*/
void print(const std::string& text, std::ofstream& out);