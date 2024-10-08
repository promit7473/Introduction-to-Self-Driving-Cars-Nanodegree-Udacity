#include "matrix_addition_improved.h"

using namespace std;

vector < vector <int> > matrix_addition_improved (vector < vector <int> > matrixa, vector < vector <int> > matrixb) {
    
    vector<int>::size_type rows_a = matrixa.size();
    vector<int>::size_type rows_b = matrixb.size();
    vector<int>::size_type cols_a = matrixa[0].size();
    vector<int>::size_type cols_b = matrixb[0].size();

    vector < vector <int> > matrix_sum(rows_a, vector<int>(cols_a));

    if (rows_a == rows_b && cols_a == cols_b) {
        
        for (unsigned int i = 0; i < matrixa.size(); i++) {
            for (unsigned int j = 0; j < matrixa[0].size(); j++) {
                matrix_sum[i][j] = matrixa[i][j] + matrixb[i][j];
            }
        }
        return matrix_sum;
    }
  	
  	return matrix_sum;
  
} 
