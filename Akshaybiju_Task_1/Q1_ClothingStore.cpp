#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,T,X[100000],Y[100000],Z[100000],A[100000],B[100000],C[100000],S;
	cin>>T;
	for(i=0;i<T;i++)
	    {
	        cin>>X[i]>>Y[i]>>Z[i]>>A[i]>>B[i]>>C[i];
	    }
	for(i=0;i<T;i++)
	{
	    S=0;
	if(Z[i]<=C[i])
	    {
	        S=S+Z[i];   
	    }
    else
        {
            S=S+C[i];
            Y[i]=Y[i]+(Z[i]-C[i]);
            
        }
        if(Y[i]<=B[i])
	    {
	        S=S+Y[i];   
	    }
    else
        {
            S=S+B[i];
            X[i]=X[i]+(Y[i]-B[i]);
            
        }
        if(X[i]<=A[i])
	    {
	        S=S+X[i];   
	    }
    else
        {
            S=S+A[i];
            
            
        }
        cout<<S<<"\n";
	}    
}
