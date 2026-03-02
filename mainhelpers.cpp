#include <iostream>
#include <vector>
#include "mainhelpers.h"
#include "mathhelpers.h"
int menuprint() {
    int selection {};
    std::cout << ""<<std::endl;
    std::cout << ""<<std::endl;
    std::cout << "Welcome to the C++ data visualizer!"<< std::endl;
	std::cout << "For now we are starting with linear algebra, state what problem"<<std::endl;
	std::cout << "type would you like to start with?"<<std::endl;
	std::cout << "			     Menu"<<std::endl;
	std::cout << "______________________________________________________________"<<std::endl;
	std::cout << "1.			     Ref"<<std::endl;
	std::cout << "2.			     RREF"<<std::endl;
    std::cout << "6.			     Quit"<<std::endl;
	std::cout << "Enter your numbered selection here: ";
	std::cin >> selection;
	
    return selection;
}


std::vector<std::vector<int>> buildmatrixprint(){
    int rows {};
	int columns {};

    std::cout <<"Next lets build your matrix how many rows are there? ";
	std::cin >> rows;
	std::cout <<"Next lets build your matrix how many columns are there? ";
	std::cin >> columns;
    std::cout<<""<<std::endl;
    std::vector<std::vector<int>> builtmatrix = buildmatrix(rows, columns);
    std::cout<<""<<std::endl;

    for (int rownum = 0; rownum < rows; rownum++){
		for (int colnum =0; colnum < columns; colnum++){
            int currvalue = builtmatrix[rownum][colnum];
			std::cout<<" "<<currvalue<<" ";
		}
		std::cout<<std::endl;
	}
    return builtmatrix;
}

std::vector<std::vector<int>> printmatrix(std::vector<std::vector<int>> ranmatrix){
    size_t rows = ranmatrix.size();
    size_t columns = 0;

    if (rows > 0) {
        columns = ranmatrix[0].size();
    }
    // convert unsigned int from size to int for boolean logic
    int rowint = rows;
    int colint = columns;

    for (int rownum = 0; rownum < rowint; rownum++){
		for (int colnum =0; colnum < colint; colnum++){
            int currvalue = ranmatrix[rownum][colnum];
			std::cout<<" "<<currvalue<<" ";
		}
		std::cout<<std::endl;
	}
    return ranmatrix;
}

