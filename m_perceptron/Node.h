#ifndef M_PERCEPTRON_NODE_H
#define M_PERCEPTRON_NODE_H

class Node {
private:
    double value;

public:
    Node(char* name, double v);
    double forward();
    Node* outbound;
    Node* inbound;
    char* name;
};

#endif //M_PERCEPTRON_NODE_H
