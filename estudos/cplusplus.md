#c++ recursos  
## Bibliotecas  
* string -> uso de strings  
* stdio -> biblioteca de entrada e saida padrão que libera o cin e o cout  
* math.h -> biblioteca com funções matemáticas, destaque para sqrt() e pow()  
* iomanip -> manipulação da entrada e saída com destaque para setprecision()  
* algorithm -> funções interessantes para trabalhar com listas
* unistd.h -> para poder usar o time(), o parâmetro são segundos

## Tipos
* inteiro, -2.147.483.648 até 2.147.483.647, 2 ou 4 bytes
* float, -3,4 x 1038 a 3,4 x 1038, 4 bytes
* double, -1,7 x 10308 a 1,7 x 10308, 8bytes
* char, caractere, 1byte
* bool, true ou false, 1 byte
* void, sem valor

## Lindado com string
* pra usar string colocar a biblioteca string
* para comparar duas strings usar o método compare
  * nesse método o retorno 0 vale a dizer que as strings são identicas   
* para retornar quatidade de caracteres usar o método length
* para receber uma string inteira usar a função getline() passando o cin como primeiro parâmetro e a variável string como segundo;
* usar a função isspace(string) para saber se o espaço está vazio. Retorna 1 se está e 0 caso contrário

## STL

### Containers de sequência
#### vector
#### list
#### dec

### Containers associativos
#### set
#### multiset
#### map
* include map
* o map é uma estrutura de dados ordenada com cada elemento tendo uma chave de identificação e um valor referente a chave
* map<type,tyope>nome_do_map;
* para manipular o map é importante entender iterators e pair
* métodos do map
 * nome_do_map.insert(pair<type,type>(valor1,valor2);)
 * nome_do_map.find() retorna um iterator pro elemento procurado, ou retorna o fim do map
#### multimap

### Cotainers adaptativos
#### stack
#### queue

### Iterators

### Código genérico
