// stats.h
#ifndef STATS_H
#define STATS_H

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

#endif // STATS_H
