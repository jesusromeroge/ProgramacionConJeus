#include<bits/stdc++.h>

using namespace std;


int main(){
	
	// VARIABLES
	
    float Pi=3.14159;
	int NUMV,i,OVx[50],OVy[50];
	float VV[50],AV[500],Ax,Bx,Ay,By;
	
	// EL NUMERO DE VECTORES A CALCULAR
	
	cout<<"NUMERO DE VECTORES A CALCULAR: ";
	cin>>NUMV;
	
	//INGRESAN LOS DATOS EN ORDEN DE 
	// MAGNITUD
	// SENTIDO EN X && SENTIDO EN Y
	// LA DIRECCION DADA POR EL ANGULO CON RESPECTO A EL EJE X
	
	for(i=0;i<NUMV;i++){
	cout<<"INGRESE EL VALOR DEL VECTOR: ";
	cin>>VV[i];
	cout<<"QUE ORIENTACION TIENE EN X: ";
	cout<<"\n1 = +: \n";
	cout<<"2 = -: \n";
	cin>>OVx[i];
	cout<<"\nQUE ORIENTACION TIENE EN Y: ";
	cout<<"\n1 = +: \n";
	cout<<"2 = -: \n";
	cin>>OVy[i];
	cout<<"INGRESE EL VALOR DEL ANGULO DEL VECTOR: ";
	cin>>AV[i];
	}
	
	// CALCULAR EL VECTOR EN X POR MEDIO DE COSENO
	// DEPENDIENDO DE SU SENTIDO EN X && EN Y
	
	for(i=0;i<NUMV;i++){
		if(OVx[i]==1){
		cout<<"\n";
		Ax=cos(AV[i]*Pi/180);
		cout<<"Coseno del angulo es: "<<Ax;
		Bx=Ax*VV[i];
		cout<<" Resultado del eje X es: "<<Bx;
	}else if(OVx[i]==2){
		cout<<"\n";
		Ax=cos(AV[i]*Pi/180);
		cout<<"Coseno del angulo es: "<<Ax;
		Bx=-Ax*VV[i];
		cout<<" Resultado del eje X es: "<<Bx;
	}
	}
	
	// CALCULAR EL VECTOR EN Y POR MEDIO DE SENO
	// DEPENDIENDO DE SU SENTIDO EN X && EN Y
	
	for(i=0;i<NUMV;i++){
		if(OVy[i]==1){
		cout<<"\n";
		Ay=sin(AV[i]*Pi/180);
		cout<<"Seno del angulo es: "<<Ay;
		By=Ay*VV[i];
		cout<<" Resultado del eje X es: "<<By;
    }else if(OVx[i]==2){
		cout<<"\n";
		Ay=cos(AV[i]*Pi/180);
		cout<<"Seno del angulo es: "<<Ay;
		By=-Ay*VV[i];
		cout<<" Resultado del eje X es: "<<By;
	}
	}

cout<<"\n\n";
cout<<"Hecho por Jesus Javier Romero Gallardo\n";
cout<<"Basado en formulas de fisica "<<'"'<<"adicion de vectores"<<'"'<<"\n\n";
	
	system("pause");
}
