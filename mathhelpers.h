#ifndef MATHHELPERS_H
#define MATHHELPERS_H
#include <vector>
#include <set>
#include <tuple>

std::vector<std::vector<int>> buildmatrix(int rows, int columns);
std::vector<std::vector<int>> rowreductionref(std::vector<std::vector<int>> entirematrix, bool augbool);
// this has uses in other methods later to solve for cofactor expansion and checking for zeros where needed
std::set<std::tuple<int, int>> findsetofzeros(std::vector<std::vector<int>> entirematrix);
std::tuple<int, int> getsizeofmatrix(std::vector<std::vector<int>> entirematrix);
#endif // MATHHELPERS_H
