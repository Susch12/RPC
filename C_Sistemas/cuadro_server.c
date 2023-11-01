#include "cuadro.h" 
int * perimetro_1_svc(int *argp, struct svc_req *rqstp) 
{ 
    static int result; 
    result = 4* (*argp); 
    return &result; 
} 
double * area_1_svc(int *argp, struct svc_req *rqstp) 
{ 
    static double result; 
    result = (*argp) * (*argp); 
    return &result; 
} 
