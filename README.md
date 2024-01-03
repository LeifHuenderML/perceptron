<img src="/docs/images/perceptron_logo.png" alt="Perceptron Logo" width="200"/>

# Perceptron

## Introduction
This repository contains a straightforward C++ implementation of a perceptron, inspired by Frank Rosenblatt's seminal paper "The Perceptron". Additional insights were gathered from [this Towards Data Science article](https://towardsdatascience.com/perceptron-learning-algorithm-d5db0deab975).

## Overview
The implementation focuses on the essential elements of the perceptron algorithm. The process begins by initializing the weights to random values. It then iteratively adjusts these weights based on the data's linear separability. If the data isn't linearly separable, you can set a limit on the number of training iterations.

During each iteration, the algorithm selects a random data point for prediction and updates the weights based on the outcome. The decision criteria are based on the sign of the dot product of the weights and the input; positive for one label and negative for the other. Incorrect predictions lead to adjustments in the weight vector through the addition or subtraction of the data point values.

## Getting Started
To begin using this perceptron implementation, follow these steps:

1. **Clone the Repository**

git clone https://github.com/LeifHuenderML/perceptron.git



2. **Navigate to the Directory**

cd perceptron


3. **Compile the Source Files**

g++ -std=c++11 -o perceptron perceptron.cpp main.cpp


4. **Run the Program**

./perceptron

## Explore and Enjoy!
This model offers a great starting point for exploring machine learning concepts. Feel free to dive in and experiment!
