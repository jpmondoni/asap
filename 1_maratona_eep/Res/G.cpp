#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

/*int MochilaFracionaria(int W, int Pesos[], int Valores[], int n){
  // se não houver mais itens ou se o peso tiver sido extrapolado
  if(n == 0 || W == 0) 
    return 0;

  // se o peso to N-ésimo item é maior que a cap. da mochila, não pode ser incluido
  if(Pesos[n-1] > W)
    return MochilaFracionaria(W, Pesos, Valores, n-1);

  else
    return max( Valores[n-1] + MochilaFracionaria(W-Pesos[n-1], Pesos, Valores, n-1),
      MochilaFracionaria(W, Pesos, Valores, n-1));
}
*/


//sMochila Fracionaria Usando Programaçao Dinamica
int MochilaFracionaria(int W, int Pesos[], int Valores[], int n){
  int i, j;
  int K[n+1][W+1];

  for(i=0; i <= n; i++){
    for(j = 0; j <= W; j++){
      if(i==0 || j==0)
        K[i][j]=0;
      else if(Pesos[i-1] <= j)
        K[i][j] = max(Valores[i-1] + K[i-1][j-Pesos[i-1]], K[i-1][j]);
      else
        K[i][j] = K[i-1][j];
    }
  }

  return K[n][W];

}

int main(){
  int n, Peso, Cap, Valor;
  cin >> n >> Cap;
  int Pesos[1000];
  int Valores[1000];
  
  for(int i=0;i<n;i++){

    scanf("%d %d",&Peso,&Valor);  
    Pesos[i]=Peso;
    Valores[i]=Valor;
  }

  printf("%d\n", MochilaFracionaria(Cap, Pesos, Valores, n));

  return 0;
}