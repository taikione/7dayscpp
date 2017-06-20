#include "Node.h"


double sigmoid(double x){
    return 1/(1+std::exp(-x));
}

Node::Node(char* name, Node* inbound) {
    Node::name = name;
    Node::inbound = inbound;
    Node::outbound = 0;
}

Node::Node(char* name, Node* inbound, MatrixXd v) {
    Node::name = name;
    Node::values = v;
    Node::inbound = inbound;
    Node::outbound = 0;
}

MatrixXd Node::forward() {
    if(this->inbound != nullptr){
        MatrixXd inbound_input = this->inbound->forward();
        MatrixXd output = inbound_input*Node::weight;
        return output.array().unaryExpr(&sigmoid);
    } else {
        return this->values;
    }
}

void Node::initWeight(int in_size, int out_size) {
    if(this->inbound != nullptr){
        Node::weight = MatrixXd::Ones(in_size, out_size);
    } else {
        cout << "input layer has not weight" << endl;
    }
}
