#ifndef M_PERCEPTRON_NODE_H
#define M_PERCEPTRON_NODE_H

#include "Eigen/Core"
#include <iostream>
using namespace Eigen;
using namespace std;

class Node {
private:
    MatrixXd values;
    MatrixXd weight;

public:
    Node(char* name, MatrixXd v = MatrixXd::Ones(1,1));
    void initWeight(int h, int w);
    MatrixXd forward();
    //double sigmoid(double x);

    Node* outbound;
    Node* inbound;
    char* name;
};

#endif //M_PERCEPTRON_NODE_H
