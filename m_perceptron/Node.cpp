#include "Node.h"

Node::Node(char* name, double v) {
    Node::name = name;
    Node::value = v;
    Node::inbound = 0;
    Node::outbound = 0;
}

double Node::forward() {
    if(this->inbound != 0){
        double pre = this->inbound->forward();
        return this->value + pre;
    } else {
        return this->value;
    }
}