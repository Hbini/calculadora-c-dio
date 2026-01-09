# Calculadora em Linguagem C - Projeto DIO

Calculadora completa desenvolvida em linguagem C com operações aritméticas básicas e avançadas.

## Descrição do Projeto

Este projeto implementa uma calculadora funcional em C seguindo todos os conceitos e técnicas apresentados no módulo 3 da formação "C Developer" da DIO. A calculadora oferece operações matemáticas básicas e avançadas com entrada e saída através do terminal.

## Funcionalidades

### Operações Básicas
- ✅ Adição (+)
- ✅ Subtração (-)
- ✅ Multiplicação (*)
- ✅ Divisão (/)
- ✅ Resto da divisão (%)

### Operações Avançadas (Modo Programador)
- 🔲 Operações binárias
- 🔲 Operações decimais
- 🔲 Operações hexadecimais
- 🔲 Conversão entre sistemas numéricos

## Estrutura do Projeto

```
calculadora-c-dio/
├── src/
│   ├── calculator.c          # Implementação principal da calculadora
│   ├── calculator.h          # Header com declarações de funções
│   ├── operations.c          # Funções das operações aritméticas
│   └── operations.h          # Headers das operações
├── bin/                      # Arquivos compilados
├── Makefile                  # Script de compilação
├── README.md                 # Este arquivo
└── .gitignore              # Configuração de exclusão Git
```

## Requisitos

- GCC (GNU C Compiler) ou outro compilador C compatível
- Make (para usar o Makefile)
- Sistema operacional: Linux, Windows (com MinGW) ou macOS

## Compilação

### Usando Makefile
```bash
make
```

### Manual (GCC)
```bash
gcc -o calculadora src/calculator.c src/operations.c -lm
```

## Uso

### Executar a calculadora
```bash
./calculadora
```

### Exemplo de entrada
```
--- Calculadora C ---
Escolha uma operação:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
5. Resto
0. Sair

Opção: 1
Primeiro número: 10
Segundo número: 5
Resultado: 15
```

## Características Técnicas

- Validação de entrada do usuário
- Tratamento de erros (ex: divisão por zero)
- Interface de menu intuitiva
- Código modularizado com funções separadas
- Suporte a operações com números decimais
- Precisão em cálculos matemáticos

## Testes

```bash
make test
```

## Melhorias Implementadas

- [x] Operações básicas completas
- [x] Validação de entrada
- [x] Menu intuitivo
- [x] Tratamento de divisão por zero
- [ ] Modo programador (binárias, hexadecimais)
- [ ] Histórico de operações
- [ ] Interface gráfica

## Plataforma

- **Plataforma:** DIO (Digital Innovation One)
- **Curso:** Formação C Developer
- **Especialista:** Diego Renan
- **Nível:** Intermediário

## Licença

Este projeto é de código aberto e está disponível para fins educacionais.

## Autor

Desenvolvido como projeto prático da formação DIO.

## Links Úteis

- [DIO - Plataforma de Aprendizado](https://www.dio.me)
- [Documentação C (cppreference.com)](https://en.cppreference.com/w/c)
- [Manual GCC](https://gcc.gnu.org/onlinedocs/)

---

**Status:** Em desenvolvimento ✨
