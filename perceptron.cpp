/**
 * @file perceptron.cpp
 * @author Leif Huender
 * @brief class implementation of the perceptron
 * @version 0.1
 * @date 2023-12-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "perceptron.h"

void Perceptron::setData(std::vector<std::vector<double>> d){
    data = d;
};

void Perceptron::init_weights(){
    //initialize w with random numbers
    for(int i = 0; i < data[0].size(); ++i){
        w.push_back(static_cast<int>(rand()));
    }
};

double Perceptron::dotProduct(std::vector<double> &a, std::vector<double> &b){
    //error handles vectors length
    if(a.size() != b.size()){
        throw std::invalid_argument("Vectors must be of equal length");
    }

    double dot = 0;
    for(size_t i = 0; i < a.size(); ++i){
        dot += a[i] * b[i];
    }
    return dot;
};

void Perceptron::vectorAddition(std::vector<double> &a, std::vector<double> &b){
    //error handles vectors length
    if(a.size() != b.size()){
        throw std::invalid_argument("Vectors must be of equal length");
    }

    //manipulation of data happens to vector a only
    for(size_t i = 0; i < a.size(); ++i){
        a[i] += b[i];
    }
};

void Perceptron::vectorSubtraction(std::vector<double> &a, std::vector<double> &b){
    //manipulation of data happens to vector a only
    for(size_t i = 0; i < a.size(); ++i){
        a[i] -= b[i];
    }
};

void Perceptron::trainPerceptron(int threshold){
    //initialize weights to random numbers
    init_weights();
    //use tempData to train and remove elements from when it correctly guesset the label
    std::vector<std::vector<double>> tempData = data;
    //iterates until convergence or untile iterations passes threshold
    int nIterations = 0;
    while(tempData.size() != 0 || nIterations < threshold){
        //picks a random place in the vector to have it predict from
        int placement = rand() % tempData.size();
        std::vector<double> x = tempData[placement];
        //incorrect guess updates the weights accordingly
        if(x.back() == pLabel && (dotProduct(w, x) < 0)){
            vectorAddition(w, x);
        }
        //incorrect guess updates the weights accordingly
        else if(x.back() == nLabel and dotProduct(w, x) >= 0){
            vectorSubtraction(w,x);
        }
        //correct guess removes that element from the temporary vector
        else{
            //removes the correctly guessed element from the vector
            std::swap(tempData[placement], tempData.back());
            tempData.pop_back();
        }
        ++ nIterations;
    }
};

Perceptron::Perceptron(){
    //seed random number generator
    srand(time(NULL));
};
