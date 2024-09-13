//
//  main.cpp
//  Jacobi
//
//  Created by Stefano Tonini on 09/02/22.
//
#include <iostream>
#include <Eigen>
#include <cmath>

using namespace std;
using namespace Eigen;

double ordine1(MatrixXd A,MatrixXd B,MatrixXd C){
    float sum =0;
    for(int i=0;i<3;i++){
        float res = 0;
        for(int j=0; j<3;j++){
            res +=(A(i,j));
        }
        if(res!=C(i)){
            cout<<"Ordine 1"<<endl;
            return -1;
        }
    }
    for(int i=0;i<3;i++){
        sum+=B(i);
    }
    if(sum!=1){
        cout<<"Ordine 1"<<endl;
        return -1;
    }
    return 0;
}
double ordine2(MatrixXd A,MatrixXd B,MatrixXd C){
    float res = 0;
    for(int i=0;i<3;i++){
        res+=B(i)*C(i);
    }
    if(res!=0.5){
        cout<<"Ordine 1"<<endl;
        return -1;
    }
    return 0;
}
double ordine3(MatrixXd A,MatrixXd B,MatrixXd C){
    Vector2d valore((double)1/3,0);
    double res = 0;
    for(int i=0;i<3;i++){
        res+=B(i)*(pow(C(i),2));
    }
    if(res!=valore(0)){
        cout<<"Ordine 2"<<endl;
        return -1;
    }
    Vector3d D;
    D=A*C;
    double d = 0;
    for(int i=0;i<3;i++){
        d+=B(i)*D(i);
    }
    if(d!=(valore(0)*0.5)){
        cout<<"Ordine 2"<<endl;
        return -1;
    }
        return 0;
}
double ordine4(MatrixXd A,MatrixXd B,MatrixXd C){
    Vector2d valore((double)1/3,0);
    double res = 0;
    for(int i=0;i<3;i++){
        res+=B(i)*(pow(C(i),3));
    }
    if(res!=0.25){
        cout<<"Ordine 3"<<endl;
        return -1;
    }
    Vector3d D;
    D=A*C;
    float d = 0;
    for(int i=0;i<3;i++){
        d+=C(i)*B(i)*D(i);
    }
    if(d!=0.125){
        cout<<"Ordine 3"<<endl;
        return -1;
    }
    Vector3d e;
    e = A.transpose()*B;
    double furs = 0;
    for(int i=0;i<3;i++){
        furs+=e(i)*(pow(C(i),2));
    }
    if(furs!=(valore(0)*0.25)){
        cout<<"Ordine 3"<<endl;
        return -1;
    }
    double diw = 0;
    for(int i=0;i<3;i++){
        diw+=e(i)*D(i);
    }
    if(diw!=(valore(0)*0.125)){
        cout<<"Ordine 3"<<endl;
        return -1;
    }else
        cout<<"Ordine superiore a 4"<<endl;
    return 0;
}
int main(){
    Matrix3d A;
    Vector3d C(0,0.5,1);
    Vector3d B((double)1/6,(double)2/3,(double)1/6);
    A <<(double)1/6,(double)-1/6,0,(double)1/6,(double)1/3,0,(double)1/6,(double)5/6,0;
//    cout<<"A:"<<endl<<A<<endl;
//    cout<<"B:"<<endl<<B<<endl;
//    cout<<"C:"<<endl<<C<<endl;
    if((ordine1(A, B, C))==0){
        if((ordine2(A, B, C))==0){
            if((ordine3(A, B, C))==0){
                ordine4(A, B, C);
            }
        }
    }
    return 0;
}

//#include <iostream>
//#include <Eigen>
//
//convolution( Eigen::MatrixXd & A, Eigen::Matrix3d const & B ) {
//  int nr = A.rows();
//  int nc = A.cols();
//  Eigen::MatrixXd C(nr,nc);
//  C.noalias() = A;
//  for ( int i = 1; i < nr-1; ++i ) {
//    for ( int j = 1; j < nc-1; ++j ) {
//      double res = 0;
//      for ( int ii = -1; ii <= 1; ++ii ) {
//        for ( int jj = -1; jj <= 1; ++jj ) {
//          res += A(i+ii,j+jj)*B(ii+1,jj+1);
//        }
//      }
//      C(i,j) = res;
//    }
//  }
//  return C;
//}
//
//int main() {
//
//    return 0;
//}
