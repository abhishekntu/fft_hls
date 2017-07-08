#include "fft_bfly.h"
double w_re={1.00000};
double w_im={0.00000};
int main()
{
	double X_R [2];
	double X_I [2];
    int i;
    /* Init inputs */
    for (i=0; i < 2; i++) {
        X_R[i] =  (double) i;
        X_I[i]= (double) 0.0;
    }
   fft_bfly(X_R,X_I,w_re,w_im);
    for (i=0; i < 2; i++)
    {
        printf("%d: \t %lf + %lf \n", i,  X_R[i], X_I[i]);
    }
    return 0;
}
