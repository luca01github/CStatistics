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

#endif // STATS_H
