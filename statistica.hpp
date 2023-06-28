
#include <math.h>
#pragma once 


using namespace std;
/*  TODO:

1. Overload functions to enable vectors use.
2. General optimization check.
3. DONE --- Proper modern include guard.
4. Create template function headers to easily overload functions for other data structures. 


*/
// Arithmetic average. Calculated from passed array of values (double arr[]) and size of said array (int size). Returns a result (double).
double ArithmeticAverage(double arr[], int size){

    double result = 0;
    for (int i = 0; i<size; i++){
        result+=arr[i];
    }
    result = result/size;

    return result;

}

// Geometric average. Calculated from passed array of values (double arr[]) and size of said array (int size). Returns a result (double).
double GeometricAverage(double arr[], int size){


    double result = 1;
    for (int i = 0; i<size; i++){
        result*=arr[i];
    }
    result = pow(result, 1.0/size);

    
    
    return result;

}

// Calculates standard deviation from passed array of values (double arr[]) and size of said array (int size). Returns a result (double). CONTAINS CALL TO 'ArithmeticAverage()' !.
double StandardDeviation(double arr[], int size){
    double result = 0;

    double sum = 0;

    double avg = ArithmeticAverage(arr, size);

    for (int i = 0; i < size; i++){
        sum =+ pow((arr[i] - avg),2);
    }

    result = sqrt(sum/size);


    
    return result;
}



//Calculates the median from passed array of values (double arr[]) and size of said array (int size). Returns a result (double).
double Median(double arr[] , int size);

//Calculates the weighted average from passed array of values (double arr[]), array of weights (double weights[]) and size of both arrays (int size). Returns a result (double).
double WeightedAverage(double arr[], double weights[], int size);


