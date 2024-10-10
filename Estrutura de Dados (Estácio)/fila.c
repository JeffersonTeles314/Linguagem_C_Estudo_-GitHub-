

// Estrutura de dados para um elemento da fila
struct fila_item {
  int dado;
  struct fila_item *proximo; // Adicione o membro 'proximo'
};

// Estrutura de dados para a fila
struct fila {
  int tamanho;
  struct fila_item *inicio;
  struct fila_item *fim;
};

// Função para criar uma nova fila
struct fila *cria_fila() {
  struct fila *fila = malloc(sizeof(struct fila));
  fila->tamanho = 0;
  fila->inicio = NULL;
  fila->fim = NULL;
  return fila;
}

// Função para inserir um elemento na fila
void insere_fila(struct fila *fila, int dado) {
  struct fila_item *novo_item = malloc(sizeof(struct fila_item));
  novo_item->dado = dado;

  if (fila->inicio == NULL) {
    fila->inicio = novo_item;
    fila->fim = novo_item;
  } else {
    fila->fim->proximo = novo_item;
    fila->fim = novo_item;
  }

  fila->tamanho++;
}

// Função para remover um elemento da fila
int remove_fila(struct fila *fila) {
  if (fila->inicio == NULL) {
    return -1;
  }

  struct fila_item *item_removido = fila->inicio;
  fila->inicio = item_removido->proximo;

  if (fila->inicio == NULL) {
    fila->fim = NULL;
  }

  fila->tamanho--;

  free(item_removido);

  return item_removido->dado;
}

// Função para imprimir uma fila
void imprime_fila(struct fila *fila) {
  struct fila_item *item = fila->inicio;

  while (item != NULL) {
    printf("%d ", item->dado);
    item = item->proximo;
  }

  printf("\n");
}

int main() {
  struct fila *fila = cria_fila();

  insere_fila(fila, 10);
  insere_fila(fila, 20);
  insere_fila(fila, 30);

  imprime_fila(fila);

  int valor_removido = remove_fila(fila);
  printf("Valor removido: %d\n", valor_removido);

  imprime_fila(fila);

  return 0;
}