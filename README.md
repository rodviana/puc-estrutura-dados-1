# Estrutura de Dados 1

| | |
|---|---|
| **Disciplina** | Estrutura de Dados 1 (CMP1054) |
| **Período** | 3º |
| **Stack** | C / C++ com **Qt** (`.pro` + `qmake`) |

## Visão geral

Implementações clássicas de **estruturas de dados lineares** e **árvores**, com testes automatizados (`testa*.cpp`). Projetos organizados por aula, do vetor estático à árvore binária.

## Mapa de conteúdo por aula

| Pasta | Tópico | Estruturas |
|-------|--------|------------|
| `aula 2/` | Revisão C++ | 4 desafios (`aula2_desafio1`–`4`) |
| `aula 4 - 6 pilha/` | Pilha | `pilha_contato`, `pilha_inteiro`, `pilha_string` |
| `aula 7 - 8 fila/` | Fila estática | Implementações com array circular |
| `aula 9 - 12 lista/` | Lista sequencial | Inserção, remoção, busca |
| `aula 13 - estrutura auto referenciada` | Lista ligada | `PilhaAutoReferencia` |
| `aula 15 - EstAutoRef - Fila` | Fila encadeada | Nós dinâmicos |
| `aula 17- ListaEncadeada` | Lista encadeada | Operações completas |
| `aula 18 - ListaEncadeadaOrdenada` | Lista ordenada | Inserção ordenada |
| `aula 19 - Árvores` | Árvores | `ArvoreBipartida` e exercícios |
| `aula 13 - 17 - TrabalhosReentrega` | Entrega | `FilaEncadeada`, `ListaEncadeada`, `PilhaEncadeada` |

## Projetos principais (reentrega)

| Projeto | Arquivos-chave | Descrição |
|---------|----------------|-----------|
| **PilhaEncadeada** | `pilha.cpp`, `testapilha.cpp` | Pilha com lista ligada |
| **FilaEncadeada** | `fila.cpp`, `cliente.cpp` | Fila de clientes com nó dinâmico |
| **ListaEncadeada** | `lista.cpp`, `testalista.cpp` | Lista simples com inserção/remoção |

## Como executar (Qt)

```bash
cd "aula 13 - 17 - TrabalhosReentrega/FilaEncadeada"
qmake FilaEncadeada.pro
make
./FilaEncadeada   # ou o nome do binário gerado
```

Alternativa: abrir o `.pro` no **Qt Creator** e executar os targets de teste.

## Padrão de código

- Separação `.h` / `.cpp`
- Classes `Cliente`, `Fila`, `Pilha`, `Lista`
- Arquivos `testa*.cpp` validam invariantes das estruturas
---

## Autor

**Rodrigo Viana Quirino** — Ciência da Computação, PUC Goiás.

Repositório público na conta [rodviana](https://github.com/rodviana).
