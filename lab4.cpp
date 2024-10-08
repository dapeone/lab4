#include <iostream>
using namespace std;

int main(){
  setlocale (LC_ALL, "RUS");
  const int m=10, n=10;
  double c, P[m][n], sum;
  int strok,stolb,i,j,kolvo;
  
  cout <<"Введите количество строк ";
  cin >> strok;
  cout <<"Введите количество столбцов ";
  cin >> stolb;
  cout <<"Введите элементы матрицы"<< endl;
  
  for (i=0; i<strok; i+=1){
    for (j=0; j<stolb; j+=1){
      cin >> P[i][j];
    }
  }
  
  cout <<"Исходная матрица"<< endl;
  for (i=0; i<strok; i+=1) {
    for (j=0; j<stolb; j+=1){
      cout << P[i][j] << " ";
    }
  cout << endl;
  }
  
  cout <<"Среднее арифметическое по столбцам"<< endl;
  for (j = 0; j < stolb; j+=1){
    sum = 0;
    kolvo = 0;
    for (i = 0; i < strok; i+=1){
      sum += P[i][j];
      kolvo += 1;
    }
    sum = sum/kolvo;
    cout << sum << " ";
  }
}
