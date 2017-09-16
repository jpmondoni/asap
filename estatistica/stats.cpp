#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <windows.h>

using namespace std;


void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

double Media(vector<int> DataSet, int ArrSize);
double Moda(vector<int> DataSet, int n);
double Mediana(vector<int> DataSet, int ArrSize);
double VarPopulacional(vector<int> DataSet, double media, int ArrSize);
double VarAmostral(vector<int> DataSet, double media, int ArrSize);
double PopDesvioPadrao(vector <int> DataSet, double media, int ArrSize);
double DesvioPadrao(vector <int> DataSet, double media, int ArrSize);
void DistFreq(vector<int> DataSet, int ArrSize, int z);
void DistClasses(vector<int> DataSet, int ArrSize, int z, int Ci);

int main(){
	vector <int> DataSet;	
	int i, r;
	double sum;
	cout << "Numero de elementos: ";
	cin >> r;

	for(i=0;i<r;i++){
		int aux;
		cin >> aux;
		DataSet.push_back(aux);
		sum+=aux;
	}

	int ArrSize = DataSet.size();
	sort(DataSet.begin(), DataSet.end());
	double med = Media(DataSet,ArrSize);
	cout << "Media = " << Media(DataSet,ArrSize) << endl;
	cout << "Moda = " << Moda(DataSet,ArrSize) << endl;
	cout << "Mediana = " << Mediana(DataSet,ArrSize) << endl;
	cout << "Var Pop = " << VarPopulacional(DataSet,med,ArrSize) << endl;
	cout << "Var Amostral = " << VarAmostral(DataSet,med,ArrSize) << endl;
	cout << "Desvio Padrao = " << DesvioPadrao(DataSet, med, ArrSize) << endl;
	cout << "Pop Desvio Padrao = " << PopDesvioPadrao(DataSet, med, ArrSize) << endl;
	cout << "\nTabela de distribuicao de Frequencias\n";
	cout << "E\tFi\tFr(%)" << endl;
	DistFreq(DataSet,ArrSize,0);
	cout << "\nTabela de distribuicao de classes\nClasses\t\tFi" << endl;
	

	DistClasses(DataSet,ArrSize,0,0);
}

double Media(vector<int> DataSet, int ArrSize){
	double sum;
	for(int i=0;i<ArrSize;i++){
		sum+=DataSet[i];
	}

	double media = sum/ArrSize;

	return media;
}


double Moda(vector<int> DataSet, int ArrSize){
	int count = 0, curr_cnt = 1;
	double freq_num = 0, key = 0;
	int i, j;
	for(i = 0; i < ArrSize-1; i++){
    	key = DataSet[i];
    	for(j =i+1; j < ArrSize; j++){
        	if(key == DataSet[j] && freq_num != key){
            	curr_cnt++;
        	}
    	}
	    if(count < curr_cnt){
	        count = curr_cnt;
	        curr_cnt = 1;
	        freq_num = key;
	   	}
	}
	
	return freq_num;
}

double Mediana(vector<int> DataSet, int ArrSize){
	double mediana=0;
	if(ArrSize%2==0){
		mediana=(DataSet[ArrSize/2]+DataSet[(ArrSize/2)+1])/2;
		return mediana;
	}

	else{
		mediana = DataSet[ArrSize/2];
		return mediana;
	}

}

double VarPopulacional(vector<int> DataSet, double media, int ArrSize){
	double var = 0;
	double sum =0;
	for(int i=0;i<ArrSize;i++){
		sum+=pow(DataSet[i]-media,2);
	}
	var = sum/ArrSize;

	return var;

}

double VarAmostral(vector<int> DataSet, double media, int ArrSize){
	double var = 0;
	double sum = 0;
	for(int i=0;i<ArrSize;i++){
		sum+=pow(DataSet[i]-media,2);
	}

	var = sum/(ArrSize-1);

	return var;
}

double DesvioPadrao(vector <int> DataSet, double media, int ArrSize){
	double var = VarAmostral(DataSet, media, ArrSize);

	double dp = sqrt(var);

	return dp;
}

double PopDesvioPadrao(vector <int> DataSet, double media, int ArrSize){
	double var = VarPopulacional(DataSet, media, ArrSize);

	double dp = sqrt(var);

	return dp;
}

void DistFreq(vector<int> DataSet, int ArrSize, int z){
	double frel;
	int f=0;
	double DblSize =  ArrSize;
	if(DataSet[z-1] == DataSet[z]){
		z++;
		return DistFreq(DataSet, ArrSize, z);
	}
	for(int i=0;i<ArrSize;i++){
		if(DataSet[i]==DataSet[z]){
			f++;
		}
	}
	frel = f/DblSize*100;
	
	if(z < ArrSize){
		printf("%d\t%d\t%.1lf\n",DataSet[z],f,frel);
		z++;
		return DistFreq(DataSet, ArrSize, z);
	}

}


void DistClasses(vector<int> DataSet, int ArrSize, int z, int Ci){
	int f=0;
	double k = sqrt(ArrSize);
	if(ArrSize <= 25){
		k=5;
	}
	
	int Xmin = DataSet[0];
	int Xmax = DataSet[ArrSize-1];

	double L = Xmax - Xmin;
	double h = L/k;
	if(DataSet[z-1] == DataSet[z]){
		z++;
		return DistClasses(DataSet, ArrSize, z, Ci);
	}
	for(int i=0;i<ArrSize;i++){
		if(DataSet[i] == DataSet[z]){
			f++;
		}
	}

	double X1 = Xmin+(h*Ci);
	double X2 = X1 + h;

	c
		
	if(z <= k){

		printf("[%.1lf,%.1lf)\t%d\n",X1,X2,f);
		z++;
		Ci++;
		return DistClasses(DataSet, ArrSize, z, Ci);
	}


}