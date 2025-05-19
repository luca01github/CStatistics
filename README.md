# C Statistics Header - Usage Guide

## Description
This package contains a header and a file with functions for statistics.

**For the complete project with more functions, you can find it on Gumroad [porcheddu4.gumroad.com/l/hxhmd]**

This file contains functions to calculate:
1. Mean value
2. Variance
3. Standard Deviation

The complete project on Gumroad includes:
1. Asymmetry (Third moment)
2. Kurtosis (fourth moment)
3. Covariance
4. Correlation coefficient

### what's included
* statistics.h: declaration of functions
* statistics.c: implementation of the functions
* statisticsDemo.c: simple example of usage

### How to use it
Include this line in your C file:
*#include "statistics.h"*

Every function can be used for arrays of integers, floats or double. It's only necessary to use the right one: **Each function ends with the corrispondent letter (I for integers, F for floats, D for double).**

As a parameter for the functions, you only need to pass the array and its size.

To compile the program:
*gcc statistics.c statisticsDemo.c -o statistics*

To execute:
*./statisticsDemo*

if you need to use the header in any other file, just write *nameofyourfile* instead of *statisticsDemo*

/_If you find any bug or error, or if you have any suggestions, feel free to contact me_/

Before using, consult the LICENCE.

My email: luca.porcheddu01@gmail.com

My account github: luca01github
