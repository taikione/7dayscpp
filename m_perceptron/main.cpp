/*
 * This is code to implement multilayer perceptron
 */
#include <iostream>
#include <math.h>
#include "Eigen/Core"

using namespace std;
using namespace Eigen;

#define PRINT_MAT(X) cout << #X << ":\n" << X << endl << endl
#define PRINT_MAT2(X,DESC) cout << DESC << ":\n" << X << endl << endl
#define PRINT_FNC    cout << "[" << __func__ << "]" << endl


double sigmoid(double x){
    return 1/(1+exp(-x));
}


int main() {

    const int N_input = 4;
    const int N_hidden = 3;
    const int N_output = 2;

    MatrixXd w1 = MatrixXd::Ones(N_input, N_hidden);
    MatrixXd x(1, N_input);

    x << 1.0, 0.5, 0.5, 1.0;

    MatrixXd Y = x*w1;

    PRINT_MAT2(Y, "x*w1");

    MatrixXd out = Y.array().unaryExpr(&sigmoid);

    PRINT_MAT2(out, "sigmoid(x*w1)");

    cout << "compute dot" << endl;

    return 0;
}

