/*
 * This is code to implement multilayer perceptron
 */
#include <iostream>
#include <math.h>

class activation{
public:
    double sigmoid(double x);
};

double activation::sigmoid(double x) {
    return 1/(1+exp(-x));
}

void initWeight(float (*weight)[3], int height, int width){
    for(int h=0; h<height; h++){
        for(int w=0; w<width; w++){
            weight[h][w] = (float)(rand()%100)/100;
        }
    }
}

void initWeight(float (*weight)[2], int height, int width){
    for(int h=0; h<height; h++){
        for(int w=0; w<width; w++){
            weight[h][w] = (float)(rand()%100)/100;
        }
    }
}

void dot(float *output, float *input, float (*weight)[3], int in_height, int in_width, int w_height, int w_width){
    activation active;

    for(int w=0; w<w_width; w++){
        float out = 0.0;
        for(int t=0; t<in_width; t++){
            out += input[t] * weight[t][w];
        }
        output[w] = active.sigmoid(out);
    }

}

void dot(float *output, float *input, float (*weight)[2], int in_height, int in_width, int w_height, int w_width){
    activation active;

    for(int w=0; w<w_width; w++){
        float out = 0.0;
        for(int t=0; t<in_width; t++){
            out += input[t] * weight[t][w];
        }
        output[w] = active.sigmoid(out);
    }

}


int main() {
    double input = 2.0;
    activation active;

    const int N_input = 4;
    const int N_hidden = 3;
    const int N_output = 2;
    float intermediate[3];
    float y[2];

    float input_hidden[N_input][N_hidden];
    float hidden_output[N_hidden][N_output];

    initWeight(input_hidden, N_input, N_hidden);
    initWeight(hidden_output, N_hidden, N_output);

    float X[] = {1.0, 0.5, 0.5, 1.0};

    dot(intermediate, X, input_hidden, 1, 4, 4, 3);
    dot(y, intermediate, hidden_output, 1, 3, 3, 2);

    std::cout << "compute dot" << std::endl;

    return 0;
}

