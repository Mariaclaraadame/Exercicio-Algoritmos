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
