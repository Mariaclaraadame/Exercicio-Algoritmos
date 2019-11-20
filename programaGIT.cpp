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
