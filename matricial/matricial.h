void aloca(float **matriz, int& l, int& c);

int variaveis();
 
void preenche_imprime(int& v, float **matriz);

void d(float **matriz, float **diagonal, int& v);

void s(float **matriz, float **superior, int& v);
	
void i(float **matriz, float **inferior, int& v);

void inv(float **diagonal, float **inversa, int& v);

void soma(float **matriz1, float **matriz2, float **matriz3, int& v);

void multiplicacao(float **matriz1, float **matriz2, float **matriz3, int& lm1, int& cm1, int& cm2, int& lm2);