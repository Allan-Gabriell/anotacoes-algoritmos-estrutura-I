# Manipulação de arquivos
- Um arquivo pode ser visto de duas maneiras:
    * Modo texto - arquivos que guardam texto: Ex - doc, txt, planilha, slide;
    * Modo binário - arquivos que guardam números binários - 0, 1;

    !- Todo arquivo texto precisa de um arquivo binário - extenção = " .o "

- Podemos optar por salvar (e recuperar) informações em disco em um dos dois modos;
- Uma das informações mantidas pelo SO é um cursor que indica a posição de trabalho no arquivo;
- Biblioteca de entrada e saída (stdlib.h)

- Função básica para abrir um arquivo:

        FILE *fopem ( char* nome_arquivo, char* modo);

- Modos de abertura (caracteres enterpretados):
    * r - leitura;
    * w - escrita
    * a - para escrita ao final do existente;
    * t - indica modo texto;
    * b - indica modo binário;

- Função de abrir arquivo = fopem;
- Função de fechar arquivo = fclose;
- Funções para ler dados:
    - int fscanf(FILE*fp, char* formado, ...) - escreve uma string
    - int fgetc(FILE*fp) - pega um caracter dentro do arquivo e esse será o primeiro
    - char* fgets(char* s, int n, FILE* fp) - pega uma string dentro do arquivo
- Função de escrita de dados:
    - fputc - escreve um único caractere por vez;
    - fputs - escreve uma string;
    - fprintf - 