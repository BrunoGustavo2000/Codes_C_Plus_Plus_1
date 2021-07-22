//Jogo da forca:
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

char palavraSecreta[30], letraAlternativa[1], secreta[30];

int tam, i, chanceGame, acertos;

bool acertou = false;

chanceGame = 6;
tam = 0;
i = 0;
acertos = 0;
	
cout<<endl;
cout<<"|---------------------------------------|"<<endl;
cout<<"|------ Bem vindo ao Jogo da Forca -----|"<<endl;	
cout<<"|---------------------------------------|"<<endl;	
cout<<endl;

cout<<"A seguir digite a palavra que esta no game: ";
cin >> palavraSecreta;
system("cls");

while(palavraSecreta[i] != '\0'){
	i++;
	tam++;
	
}

for(i = 0;i<30;i++){
	secreta[i] = '-';
	
}

while((chanceGame > 0)&&(acertos < tam)){
cout<<endl;	
cout<<"A quantidade de chances restantes e igual: "<< chanceGame <<endl;	
cout<<endl;
cout<<"A palavra secreta: ";

for(i=0;i<tam;i++){
	cout<<secreta[i];
	
}

cout <<"\n\nDigite uma letra: ";
cin >>letraAlternativa[0];

for(i=0;i<tam;i++){
	if(palavraSecreta[i] == letraAlternativa[0]){
	
	acertou = true;
	secreta[i] = palavraSecreta[i];
	acertos++;
	
	}
		
}
if(!acertou){
	chanceGame--;
	
}
acertou = false;
system("cls");

}

if(acertos == tam){
cout<<"|-------------------------|"<<endl;
cout<<"|    ACERTOU A PALAVRA    |"<<endl;
cout<<"|-------------------------|"<<endl;
cout<<endl;

}else{
cout<<"|-------------------------|"<<endl;
cout<<"|   VOCE FALHOU NO GAME   |"<<endl;
cout<<"|-------------------------|"<<endl;
cout<<endl;
	
	
}
system("pause");
return 0;
}
