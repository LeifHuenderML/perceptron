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
    std::vector<double> p;
    std::vector<double> n;
    std::vector<double> w;
public:
    void setInputs(std::vector<double> p, std::vector<double> n);
    void setLabels(std::string l1, std::string l2);
    void trainPerceptron();
    Perceptron();
};

#endif 