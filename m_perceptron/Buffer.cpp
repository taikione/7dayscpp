#include "Buffer.h"

Buffer::Buffer(void *ptr) {
    Buffer::controll_class = ptr;
}

Buffer::~Buffer() {
    std::cout << "node pointer is delete" << std::endl;
    delete Buffer::controll_class;
}
