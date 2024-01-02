/**
 * @file main.cpp
 * @author Leif Huender
 * @brief trains the perceptron algorithm using the iris dataset
 * @version 0.1
 * @date 2024-01-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <string>
#include <fstream>
#include <sstream>

#include "perceptron.h"

std::fstream read_csv();
void clean_data();
void seperate_data();

int main(){
    std::string label1 = "Iris-setosa";
    std::string label2 = "Iris-versicolor"

return 0;
}

//creates a tensor out of the data read from a csv, it assumes there will be 2 labeling options
//both labels should be at the end of each line, it will label them based on the labels set
std::vector<std::vector<double>> read_csv(std::string file_path, std::string label1, std::string label2){
    std::ifstream file;
    file.open(file_path);
    //ignore first line
    std::string tmp;
    std::getline(file, tmp);
    //create a vector of vectors to store the data
    std::vector<std::vector<double>> data;
    while(std::getline(file, tmp)){
        std::stringstream ss(tmp);
        std::string token;
        std::vector<double> innerVec;
        bool first_col = true;
        while(std::getline(ss, token, ',')){
            try{
                if(first_col != true){
                    double num = std::stof(token);
                    innerVec.push_back(num);
                }
                else{
                    first_col = false;
                }
            }
            catch(const std::invalid_argument& e){
                if(token == label1){
                    innerVec.push_back(0);
                }
                else{
                    innerVec.push_back(1);
                }
            }
        }
        first_col = true;
        data.push_back(innerVec);
    }
    file.close();
    return data;
}
