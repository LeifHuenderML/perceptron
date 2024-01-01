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

class Perceptron{
private:
    std::vector<double> w;
    std::vector<std::vector<double>> data;
    void Perceptron::init_w(){
         //initialize w with random numbers
        for(int i = 0; i < data.size(); ++i){
            w.push_back(static_cast<int>(rand()));
        }
    };
public:
    void Perceptron::setInputs(std::vector<double> p, std::vector<double> n){
        
    };
    void Perceptron::setLabels(std::string l1, std::string l2){

    };
    void Perceptron::trainPerceptron(){
        init_w();
        bool converge = false;
        while(!converge){
            std::vector<double> x = data[rand() % data.size()];
        }
    };
    Perceptron::Perceptron(){
        //seed random number generator
        srand(time(NULL));
    };
};