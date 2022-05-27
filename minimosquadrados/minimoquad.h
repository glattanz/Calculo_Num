#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

void aloca(float **matriz, int& l, int& c);

void preenche(float **x, float **fx, int& p);

void somatoriox(float **somax, float **x, int& grau, int& p);

void somatoriofx(float **somafx, float **fx, float **x, int& grau, int& p);
