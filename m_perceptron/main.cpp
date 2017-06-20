/*
 * This is code to implement multilayer perceptron
 */
#include <iostream>
#include <memory>
#include "Eigen/Core"
#include "Node.h"
#include "Buffer.h"

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

    unique_ptr<Node> input_ptr(new Node((char*)"input", nullptr, input_vector));
    unique_ptr<Node> hidden_ptr(new Node((char*)"hidden", input_ptr.get()));
    unique_ptr<Node> out_ptr(new Node((char*)"hidden", hidden_ptr.get()));

    /*
    Node *input_ptr = new Node((char*)"input", nullptr, input_vector);
    Buffer input_node(input_ptr);

    Node *hidden_ptr = new Node((char*)"hidden", input_ptr);
    Buffer hidden_node(hidden_ptr);

    Node *out_ptr = new Node((char*)"hidden", hidden_ptr);
    Buffer out_node(out_ptr);
    */

    // Initialize all weight
    hidden_ptr->initWeight(N_input, N_hidden);
    out_ptr->initWeight(N_hidden, N_output);

    PRINT_MAT2(hidden_ptr->forward(), "hidden forward");
    PRINT_MAT2(out_ptr->forward(), "output forward");

    return 0;
}

