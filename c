trutura 
struct no {
	int numero;
	struct no *proximo;
};
//decalraçao de variaveis
struct no *cabeça= NULL;
//funçao que insere um no na fila
void insertir(int numero) {
	//instanciao da memoria
	struct no *novono=(struct no *)malloc (sizeof(struct no));
	novo-> numero= numero;
	novo-> proximo= cabeça;
	cabeca= novoNo;
}
//funçao que remove um no na filax
int remover(){
	//variaveis
	struct no *ponteiro*= cabeça;
int retorno=0;
	if(cabeca-> proximo==NULL){
		retorno = cabeca -> numero;
		free(cabeca);
		cabeca=NULL;
	}else{
	//navegaçao na fila ate o ultimo
		while (ponteiro -> proximo -> proximo != NULL){
		ponteiro=ponteiro ->proximo
		}
	retorno= ponteiro-> proximo -> numero;
	struct no temp= ponteiro -> proximo;
	ponteiro-> proximo= NULL;
	free(temp);
	}
}
return retorno;
}
//funcao principal de execucao de programa
int main(){

	printf(%d\n", remove());                
	printf(" ==============\n");
	
	inserir(1);
	printf(%d\n", remove());
	printf (" ==============\n");
	
	inserir(1);
	inserir(2);
	inserir(3);
	inserir(4);
	inserir(5);
	printf(%d\n", remove());
	printf(%d\n", remove());
	printf(%d\n", remove());
	printf(%d\n", remove());
	printf(%d\n", remove());
	printf(" ==============\n");
}
