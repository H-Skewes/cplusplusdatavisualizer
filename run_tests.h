#ifndef RUN_TESTS_H
#define RUN_TESTS_H
#include <vector>

std::vector<std::vector<int>> buildmatrix(int rows, int columns);
std::vector<std::vector<int>> rowreductionref(std::vector<std::vector<int>> entirematrix, bool augbool);

#endif // RUN_TESTS_H
