/*
 * This is code to implement multilayer perceptron
 */
#include <iostream>
#include "Eigen/Core"
#include "Node.h"

using namespace std;
using namespace Eigen;

#define PRINT_MAT(X) cout << #X << ":\n" << X << endl << endl
#define PRINT_MAT2(X,DESC) cout << DESC << ":\n" << X << endl << endl
#define PRINT_FNC    cout << "[" << __func__ << "]" << endl


int main() {
    const int N_input = 4;
    const int N_hidden = 3;
    const int N_output = 2;

    // Define input vector
    MatrixXd input_vector(1, N_input);
    input_vector << 1.0, 0.5, 0.5, 1.0;

    Node input_layer((char*)"input", NULL, input_vector);
    Node hidden_layer((char*)"hidden", &input_layer);
    Node output_layer((char*)"output", &hidden_layer);

    // Initialize all weight
    hidden_layer.initWeight(N_input, N_hidden);
    output_layer.initWeight(N_hidden, N_output);

    PRINT_MAT2(hidden_layer.forward(), "hidden forward");
    PRINT_MAT2(output_layer.forward(), "output forward");

    return 0;
}

