//
//  main.cpp
//  FattorizzazioneLU
//
//  Created by Stefano Tonini on 09/02/22.
//

#include <iostream>
#include <Eigen>

using namespace std;
using namespace Eigen;

void ordine1(MatrixXd A,MatrixXd B,MatrixXd C){
    double res = 0;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            res +=A(i,j);
        }
        if((res=!C(i)))
        {
            cout<<"Ordine= 1"<<endl;
            break;
        }
    }
}
void ordine2(MatrixXd A,MatrixXd B,MatrixXd C){
    
}
void ordine3(MatrixXd A,MatrixXd B,MatrixXd C){
    
}
void ordine4(MatrixXd A,MatrixXd B,MatrixXd C){
    
}

int main(){
    MatrixXd A;
    VectorXd C;
    VectorXd B;
    ordine1(A, B, C);
//    ordine2(A, B, C);
//    ordine3(A, B, C);
//    ordine4(A, B, C);
    return 0;
}
