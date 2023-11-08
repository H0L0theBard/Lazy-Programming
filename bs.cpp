#include "l.h"

v sw(i* x, i* y){
    i tm = *x;
    *x = *y;
    *y = tm;
}

v bs(i ar[],i n){
    i x,y;
    b sd;

    fr (i j = 0; j < n-1; j++)
    {
        sd = fs;
        fr (i k = 0; k < n-j-1; k++)
        {
            if(ar[k] > ar[k+1]){
                sw(&ar[k],&ar[k+1]);
                sd = tr;
            }
        }
        
        if(sd == fs){
            bk;
        }
    }
}

v pa(i ar[],i s){
    fr (i j = 0; j < s; j++)
    {
        p ar[j] << " ";
    }
    p " " br;
}

i m {
    i ar[] = {62,32,23,9,10,25,239,230,23,21,56};
    i n = sz(ar)/sz(ar[0]);
    bs(ar,n);
    p "sorted: " br;
    pa(ar,n);
}
