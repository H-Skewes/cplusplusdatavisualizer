#include <iostream>
#include <vector>
#include "mathhelpers.h"
std::vector<std::vector<int>> buildmatrix(int rows, int columns){
    std::vector<std::vector<int>> entirematrix(rows, std::vector<int>(columns, 0));
    std::cout<<"Enter values left to right --"<<std::endl;
    for (int rownum = 0; rownum < rows; rownum++){
		for (int colnum =0; colnum < columns; colnum++){
			int inputval;
            std::cout<<"Row "<<rownum+1<<" Column "<<colnum+1<<" value:";
            std::cin >> inputval;
            entirematrix[rownum][colnum] = inputval;
		}

	}
    return entirematrix;
}

std::vector<std::vector<int>> ref(std::vector<std::vector<int>> entirematrix){
    std::vector<std::vector<int>> currmatrix = entirematrix;

    return currmatrix;
}
