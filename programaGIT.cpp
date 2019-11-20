#include <iostream>
#include <string>
using namespace std;








int contaLetras(char letra, string texto,int totletras)
{
  int i,qtd=0;
  for(i=0;i>totletras;i++)
  {
    if(texto[i]==letra)
    {
      qtd++;
    }
  }
  return qtd;
}
void substituirLetra(char letra1,char letra2, string texto,int totletras)
{
  int i;
  for (i=0;i<totletras;i++)
  {
    if(texto[i]==letra1)
    {
      texto[i]=letra2;
    }
  }
}
int contaPalavras(string palavra, string texto)
{
	int qtd=0,posicao;
	posicao=texto.find(palavra,0);
	while(posicao!=-1)
	{
		qtd++;
		posicao=texto.find(palavra,posicao+1);
	}
	return qtd;
}
void substituirPalavras(string plvr_1,string plvr_2,string texto)
{
	int i,posicao;
	posicao=texto.find(plvr_1,0);
	while(posicao!=-1)
	{
		texto.replace(posicao,plvr_1.length(),plvr_2);
		posicao=texto.find(plvr_1,posicao+1);
	}
	return texto;
}

int main()
{
  string texto, plvr_1, plvr_2;
  char letra, subs;
  int comp;
  cout<<"Insira o texto: \n";
  get.line(cin,texto);
  comp=texto.length();
  cout<<"\nDigite o caractere que deseja buscar: ";
  cin>>letra;
  cout<<"\nA letra aparece "<< contaLetras(letra,texto,comp) <<"vezes.\n";
  cout<<"\nDigite o caractere a ser inserido no lugar: ";
  cin>>subs;
  substituirLetra(letra,subs,texto,comp);
  cout<<"\nVersao att: \t"<<texto;
  cout<<"\nDigite a palavra a ser buscada: ";
  get.line(cin,plvr_1);
  cout<<"\nA palavra aparece "<<contaPalavras(plvr_1,texto)<<" vezes.";
  cout<<"\nDigite a palavra a ser colocada no lugar: ";
  get.line(cin,plvr_2);
  substituirPalavras(plvr_1,plvr_2,texto);
  cout<<"\nVersao att: \t"<<texto;
  return 0;
}
