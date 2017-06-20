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

    Node* outbound;
    Node* inbound;
    char* name;

public:
    Node(char* name, Node* in);
    Node(char* name, Node* in, MatrixXd v);
    void initWeight(int h, int w);
    MatrixXd forward();
    //double sigmoid(double x);
};

#endif //M_PERCEPTRON_NODE_H
