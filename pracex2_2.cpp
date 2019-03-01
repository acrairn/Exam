#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;


void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}



void swap(double &x,double &y){
	double tamp=x;
		x=y;
		y=tamp;	
}

double move(double x,double y){
	int end;
	for(int j=0;j<20;j++){
		if(x>y){
		swap(x,y) ;
		}
	}	
}
void sort(double x,double y){
	cout << move(x,y);	
}





int main(){
	double x,y,end,z,tamp;
	double s[20]={};
	int i=0;
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
		s[i] = atof(line.c_str());	
		i++;
	}
	for(int j=0;j<20;j++){
	for(int h=0;h<20;h++){
		if(s[h]>s[h+1]){
			double a=s[h];
			s[h]=s[h+1];
			s[h+1]=a;

		}
		
	}
	cout << s[j] << "\n";
	}
	
	 

	//Write your code here
	
	return 0;
}

