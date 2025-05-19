#include <stdio.h>
#include <math.h>

// Function prototypes
float calcMeanF(float array[], int size);
float calcMeanI(int array[], int size);
float calcMeanD(double array[], int size);

float calcVarianceF(float array[], int size);
float calcVarianceI(int array[], int size);
float calcVarianceD(double array[], int size);

float calcDevStandardF(float array[], int size);
float calcDevStandardI(int array[], int size);
float calcDevStandardD(double array[], int size);

float calcMeanF(float array[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += array[i];
    return sum / size;
}

float calcMeanI(int array[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += array[i];
    return sum / size;
}

float calcMeanD(double array[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += array[i];
    return sum / size;
}

float calcVarianceF(float array[], int size) {
    float mean = calcMeanF(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow(array[i] - mean, 2);
    return sum / size;
}

float calcVarianceI(int array[], int size) {
    float mean = calcMeanI(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow(array[i] - mean, 2);
    return sum / size;
}

float calcVarianceD(double array[], int size) {
    float mean = calcMeanD(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow(array[i] - mean, 2);
    return sum / size;
}

float calcDevStandardF(float array[], int size) {
    float variance = calcVarianceF(array, size);
    return sqrt(variance);
}

float calcDevStandardI(int array[], int size) {
    float variance = calcVarianceI(array, size);
    return sqrt(variance);
}

float calcDevStandardD(double array[], int size) {
    float variance = calcVarianceD(array, size);
    return sqrt(variance);
}
