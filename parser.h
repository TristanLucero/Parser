/*
Tristan Lucero () | Assignment #4 | 10/27/2020
This program uses and lexical analyzer previous built to develop a parser for the following code. This is a recursive descent syntax paser in C.

P ::= S
S ::= V:=E | read(V) | write(V) | while C do S od | S;S
C ::= E < E | E > E | E = E | E <> E | E <= E | E >= E
E ::= T | E + T | E - T
T ::= F | T * F | T / F
F ::= (E) | N | V
V ::= a | b | … | y | z | aV | bV | … | yV | zV
N ::= 0 | 1 | … | 8 | 9 | 0N | 1N | … | 8N | 9N

this code is to declare some functions and nextToken
*/
#ifndef PARSER_H
#define PARSER_H

//declare functions
void expr();
void term();
void factor();

//initalize nextToken
extern int nextToken;
#endif
