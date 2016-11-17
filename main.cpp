#include <iostream>
template<int L, int M,int T, int I,int K,int N,int C>
class DimQ
{
  double B;
public:
  DimQ(double x_=0){
      B=x_;
  }

    DimQ< L,  M, T,  I, K, N, C>operator-()const{ return DimQ< L,  M, T,  I, K, N, C>(-B);}
    DimQ< L,  M, T,  I, K, N, C>operator+(const DimQ< L,  M, T,  I, K, N, C> &other)const{return DimQ< L,  M, T,  I, K, N, C>(B+other.B);};
    DimQ< L,  M, T,  I, K, N, C>operator-(const DimQ< L,  M, T,  I, K, N, C> &other)const{return DimQ< L,  M, T,  I, K, N, C>(B-other.B);};
    double get()const{return B;};

};
template<int L_0, int M_0,int T_0, int I_0,int K_0,int N_0,int C_0,int L_1, int M_1,int T_1, int I_1,int K_1,int N_1,int C_1>
DimQ<L_0+L_1,M_0+M_1,T_0+T_1,I_0+I_1,K_0+K_1,N_0+N_1,C_0+C_1> operator*(const DimQ<L_0,M_0,T_0,I_0,K_0,N_0,C_1> &a,const DimQ<L_1,T_1,I_1,K_1,N_1,C_1> &b){ return DimQ<L_0+L_1,M_0+M_1,T_0+T_1,I_0+I_1,K_0+K_1,N_0+N_1,C_0+C_1>(a.get()+b.get());};

typedef DimQ<1, 0, 0, 0, 0, 0, 0> Length;
typedef DimQ<0, 1, 0, 0, 0, 0, 0> Massa;
typedef DimQ<0, 0, 1, 0, 0, 0, 0> Time;
typedef DimQ<0, 0, 0, 1, 0, 0, 0> Tok;
typedef DimQ<0, 0, 0, 0, 1, 0, 0> Temperatura;
typedef DimQ<0, 0, 0, 0, 0, 1, 0> Mol;
typedef DimQ<0, 0, 0, 0, 0, 0, 1> Candel;
typedef DimQ<1, 0, -2, 0, 0, 0, 0> Uscorenie;
typedef DimQ<1, 0, -1, 0, 0, 0, 0> Scorost;

template<int L, int M,int T, int I,int K,int N,int C>
std::ostream &operator<<(std::ostream &stream, const DimQ< L,  M, T,  I, K, N, C> &a);

int main() {
    std::cout << "Hello, World!" << endl;
    return 0;
}
