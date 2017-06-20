
#ifndef M_PERCEPTRON_BUFFER_H
#define M_PERCEPTRON_BUFFER_H
#include <iostream>

class Buffer {
public:
    Buffer(void* ptr);
    ~Buffer();
    void* controll_class;

private:
    int size;
};


#endif //M_PERCEPTRON_BUFFER_H
