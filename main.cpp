// Making C++ linear algebra calculator/data visualizer
//
// This project will use minimal ai (only overviews when run into errorr)
// I'm not proficient yet in C++ I'll change that opinion as I go hopefully
//
#include <iostream>
#include <vector>
#include "mainhelpers.h"
#include "mathhelpers.h"


int main(){
	int selection {};
	while(selection != 6){
		selection = menuprint();
	
		if (selection == 6){
			break;
		}
		else if(selection == 1){
			std::vector<std::vector<int>> entirematrix = buildmatrixprint();
			printmatrix(entirematrix);
			bool augbool = checkaugmented();
			std::cout<<"----Your new matrix-----"<<std::endl;
			std::vector<std::vector<int>> refmatrix = rowreductionref(entirematrix, augbool);
			printmatrix(refmatrix);
		}
	}
	// main menu

	return 0;
}	






