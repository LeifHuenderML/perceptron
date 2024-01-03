<img src="/docs/images/perceptron_logo.png"
alt="perceptron logo" width="200"/>
# perceptron
This is a straightforward C++ implementation of a perceptron, inspired by the seminal paper "The Perceptron" by Frank Rosenblatt

Additional inspiration for this project is from https://towardsdatascience.com/perceptron-learning-algorithm-d5db0deab975. 
This is a very basic implementation of a perceptron, which I built to grasp the fundamental components of how the perceptron algorithm functions. The core of the perceptron lies in the training algorithm I developed. It begins by initializing the weights with random numbers and then runs a loop until convergence, provided the data it's being trained on is linearly separable. If not, you can set a maximum number of training iterations before it stops. In each iteration, it randomly selects a member of the vector for prediction and then updates the weights accordingly. The underlying logic checks if the weight is greater or less than zero; if it's greater, it's considered label one, and if less, label two. With every incorrect prediction, it adjusts the weight vector by either adding or subtracting the values of the data it just processed. And that's essentially the crux of the perceptron.

To test and train your own perceptron you can clone my repository 

git clone https://github.com/LeifHuenderML/perceptron.git

then change to the directory

cd perceptron

then compile the files

g++ -std=11 perceptron -o perceptron.cpp main.cpp

then run the program

./perceptron 

there is lots left to explore with this model i created. Have Fun!