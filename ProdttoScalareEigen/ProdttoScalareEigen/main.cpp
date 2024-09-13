//
//  main.cpp
//  ProdttoScalareEigen
//
//  Created by Stefano Tonini on 24/02/22.
//

#include <iostream>
#include <Eigen>
using namespace std;
using namespace Eigen;

void ProductS(MatrixXd A,MatrixXd B, MatrixXd C){
    double res = 0;
    int N = A.size();
    for(int i=0;i<N;i++){
        res+=A(i)*B(i)*C(i);
    }
    cout<<"Prodotto scalare: "<<res<<endl;
}
int main() {
    Matrix4d A;
    Matrix4d B;
    Matrix4d C;
    A<<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1;
    B<<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1;
    C<<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1;
    ProductS(A,B,C);
    return 0;
}
