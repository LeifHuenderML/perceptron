/**
 * @file perceptron.h
 * @author Leif Huender
 * @brief declaration file for the perceptron learning algorithm
 * @version 0.1
 * @date 2023-12-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Perceptron{
private:
    double pLabel;
    double nLabel;
    std::vector<double> w;
    std::vector<std::vector<double>> data;
    void init_weights();
    double dotProduct(std::vector<double> &a, std::vector<double> &b);
    void vectorAddition(std::vector<double> &a, std::vector<double> &b);
    void vectorSubtraction(std::vector<double> &a, std::vector<double> &b);
public:
    void trainPerceptron(int threshold);
    Perceptron();
};

#endif