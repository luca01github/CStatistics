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

float calcAsimmetriaF(float array[], int size);
float calcAsimmetriaI(int array[], int size);
float calcAsimmetriaD(double array[], int size);

float calcCurtosiF(float array[], int size);
float calcCurtosiI(int array[], int size);
float calcCurtosiD(double array[], int size);

float calcCovarianceF(float a[], float b[], int size);
float calcCovarianceI(int a[], int b[], int size);
float calcCovarianceD(double a[], double b[], int size);

float calcCoeffCorrelationF(float a[], float b[], int size);
float calcCoeffCorrelationI(int a[], int b[], int size);
float calcCoeffCorrelationD(double a[], double b[], int size);

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

float calcAsimmetriaF(float array[], int size) {
    float mean = calcMeanF(array, size);
    float devStandard = calcDevStandardF(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 3);
    return sum / size;
}

float calcAsimmetriaI(int array[], int size) {
    float mean = calcMeanI(array, size);
    float devStandard = calcDevStandardI(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 3);
    return sum / size;
}

float calcAsimmetriaD(double array[], int size) {
    float mean = calcMeanD(array, size);
    float devStandard = calcDevStandardD(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 3);
    return sum / size;
}

float calcCurtosiF(float array[], int size) {
    float mean = calcMeanF(array, size);
    float devStandard = calcDevStandardF(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 4);
    return sum / size;
}

float calcCurtosiI(int array[], int size) {
    float mean = calcMeanI(array, size);
    float devStandard = calcDevStandardI(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 4);
    return sum / size;
}

float calcCurtosiD(double array[], int size) {
    float mean = calcMeanD(array, size);
    float devStandard = calcDevStandardD(array, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += pow((array[i] - mean) / devStandard, 4);
    return sum / size;
}

float calcCovarianceF(float a[], float b[], int size) {
    float meanA = calcMeanF(a, size);
    float meanB = calcMeanF(b, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += (a[i] - meanA) * (b[i] - meanB);
    return sum / size;
}

float calcCovarianceI(int a[], int b[], int size) {
    float meanA = calcMeanI(a, size);
    float meanB = calcMeanI(b, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += (a[i] - meanA) * (b[i] - meanB);
    return sum / size;
}

float calcCovarianceD(double a[], double b[], int size) {
    float meanA = calcMeanD(a, size);
    float meanB = calcMeanD(b, size);
    float sum = 0.0;
    for (int i = 0; i < size; i++) sum += (a[i] - meanA) * (b[i] - meanB);
    return sum / size;
}

float calcCoeffCorrelationF(float a[], float b[], int size) {
    float covariance = calcCovarianceF(a, b, size);
    float devStandardA = calcDevStandardF(a, size);
    float devStandardB = calcDevStandardF(b, size);
    return covariance / (devStandardA * devStandardB);
}

float calcCoeffCorrelationI(int a[], int b[], int size) {
    float covariance = calcCovarianceI(a, b, size);
    float devStandardA = calcDevStandardI(a, size);
    float devStandardB = calcDevStandardI(b, size);
    return covariance / (devStandardA * devStandardB);
}

float calcCoeffCorrelationD(double a[], double b[], int size) {
    float covariance = calcCovarianceD(a, b, size);
    float devStandardA = calcDevStandardD(a, size);
    float devStandardB = calcDevStandardD(b, size);
    return covariance / (devStandardA * devStandardB);
}
