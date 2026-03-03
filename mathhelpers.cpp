#include <iostream>
#include <vector>
#include <set>
#include <tuple>
#include "mathhelpers.h"


std::vector<std::vector<int>> buildmatrix(int rows, int columns){
    std::vector<std::vector<int>> entirematrix(rows, std::vector<int>(columns, 0));
    std::cout<<"Enter values left to right --"<<std::endl;
    // prints input for matrix and recieves input
    for (int rownum = 0; rownum < rows; rownum++){
		for (int colnum =0; colnum < columns; colnum++){
			int inputval;
            std::cout<<"Row "<<rownum+1<<" Column "<<colnum+1<<" Value:";
            std::cin >> inputval;
            entirematrix[rownum][colnum] = inputval;
		}

	}
    return entirematrix;
}


std::tuple<int, int> getsizeofmatrix(std::vector<std::vector<int>> entirematrix){
    size_t rowsize = entirematrix.size();
    size_t colsize = entirematrix[0].size();
    return std::make_pair(rowsize, colsize);
}


std::vector<std::vector<int>> rowreductionref(std::vector<std::vector<int>> entirematrix, bool augbool){
    int rowsize, colsize;
    std::vector<std::vector<int>> currmatrix = entirematrix;
    std::tie(rowsize, colsize) = getsizeofmatrix(entirematrix);
    
    return currmatrix;
}


std::set<std::tuple<int, int>> findsetofzeros(std::vector<std::vector<int>> entirematrix){
    int rowsize, colsize;
    std::tie(rowsize, colsize) = getsizeofmatrix(entirematrix);
    std::set<std::tuple<int, int>> setofzeros;
    //for (int rownum = 0; rownum < rowsize; rownum++){
		//for (int colnum =0; colnum < colsize; colnum++){
        //    entirematrix[rownum][colnum] = inputval;
		//}

	//}
    setofzeros.insert(std::make_tuple(1, 1));
    return setofzeros;
}

