//autor: Bruno Gustavo dos santos de lima.
//linguagem utilizada C++

//Jogo da forca\Hangman Game:

//Bibliotecas utilizadas:
#include<iostream>
#include<stdlib.h>

//Localização dos diretorios que seram usados:
using namespace std;

//Funcao Principal:
int main(){


char palavraSecreta[30]; //Palavra coletada no inicio da execucao.
char letraAlternativa[1];//Letra o gamer escolheu para a tentativa.
char secreta[30];//Recebera e a Palavra e realizara uma comparação no Arry.

int tam; //tamanho total de caracteres para comparacao.
int i;	//variavel utilizada no for.
int chanceGame; //tentativas ou total de vidas do gamer. ex: 5 tentativas.
int acertos;//Se o gamer acertar todas as letras ele ganhou, usado no while.
bool acertou = false; // acertou continua, errou perde uma vida.

chanceGame = 6;//chance total.
tam = 0; //tamanho do arry inicia com 0.
i = 0; //for inicia com 0.
acertos = 0; //acertou inicia com 0.
	
//Painel de Bem Vindo ao Game:	
cout<<endl;
cout<<"|---------------------------------------|"<<endl;
cout<<"|------ Bem vindo ao Jogo da Forca -----|"<<endl;	
cout<<"|---------------------------------------|"<<endl;	
cout<<endl;
//Final do Painel.

//Coleta da Palavra, que sera de base para o game:
cout<<"A seguir digite a palavra que esta no game: ";
//Coleta e armazena no arry de nome palavraSecreta:
cin >> palavraSecreta;
//Limpa o prompt para dar inicio ao game, obs: somente no windows funciona o comando "cls".
system("cls");

//Fim da coleta da Palavra.

//while utilizado para descobrir o tamanho da palavra em caracteres.
while(palavraSecreta[i] != '\0'){
	i++;
	tam++;
//A menos que ele encontre '\o' que equivale ao Enter o condicional continua a contagem.
//ao final 'tam' vai receber o tamanho do arry.
}
//fim do condicional while.


//for responsavel pela parte grafica da palavra oculta:
for(i = 0;i<30;i++){
	secreta[i] = '-';
//adciona hifen no arry de espelho da palavraSecreta, de forma a ocultar a palavra.

}
// Teste condicional e Print de informações:
while((chanceGame > 0)&&(acertos < tam)){
//chancesgamer = 0 (perdeu).
//acertos = tam (decobriu a palavra sendo o vencedor).
//chances restantes:
cout<<endl;	
cout<<"A quantidade de chances restantes e igual: "<< chanceGame <<endl;	
cout<<endl;
cout<<"A palavra secreta: ";
//printa um conjunto de hifen e tambem revelam letras acertadas.
for(i=0;i<tam;i++){
	cout<<secreta[i];
	
}
//Coleta a letra que o gamer quer testar:
cout <<"\n\nDigite uma letra: ";
cin >>letraAlternativa[0];
//armazena o arry.

//for realiza a verificacao se a uma letra correspondente na variavel palavraSecreta.
for(i=0;i<tam;i++){
	if(palavraSecreta[i] == letraAlternativa[0]){
	//Se letraAlternativa[0] tiver uma letra correspondente em palavraSecreta[arry] continua.
	acertou = true;
	//acerto se torna verdadeiro.
	secreta[i] = palavraSecreta[i];
	//Como a letra sera atribuida a secreta que a exibira no proximo loop. 
	acertos++;
	//acertos++, singifica que esta perto de descobrir a palavra inteira.
	}
//fim se ouver acerto = verdadeiro. 
		
}
//Caso acerto = Incorreto.
if(!acertou){
	chanceGame--;
//o Gamer perdera uma vida.	
}

//acerto fica como padrao false para o proximo loop.
acertou = false;
//limpeza da tela do prompt.
system("cls");

}
//Corpo logico do Game.

//Resultado final:
if(acertos == tam){
//acertos == tam, que e o total de caracteres no arry.
cout<<"|-------------------------|"<<endl;
cout<<"|    ACERTOU A PALAVRA    |"<<endl;
cout<<"|-------------------------|"<<endl;
cout<<endl;
//vencedor.

}else{
//Perdeu, porque não descobriu todos os caracteres.
cout<<"|-------------------------|"<<endl;
cout<<"|   VOCE FALHOU NO GAME   |"<<endl;
cout<<"|-------------------------|"<<endl;
cout<<endl;
		
}//fim do teste logico.

//Pausa o prompt:
system("pause");

//retorno:
return 0;
}
//fim do codigo base para o game.
