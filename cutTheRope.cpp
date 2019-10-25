
#include <iostream>

using namespace std;
int x=0;
int aux=0;

int max(int a, int b){
    
    if(a>b){
        return a;
    }else if(a<b){
        return b;
    }
    
}


int cutTheRope(int precios[],int n){
    
    int gabetero[n+1];
    gabetero[0]=0;
    for(int i=1;i<=n;i++){

        for(int j=0;j<i;j++){
            aux=max(aux,precios[j]+gabetero[i-j-1]);
        }
        gabetero[i]=aux;
    }
    
    return gabetero[n];
}


int main()
{
    int prueba[7]={2,7,8,25,17,28,30};
    x=cutTheRope(prueba,7);
    cout<<x<<endl;

    return 0;
}


