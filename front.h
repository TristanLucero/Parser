/*
Tristan Lucero (R11597605) | Assignment #4 | 10/27/2020
This program uses and lexical analyzer previous built to develop a parser for the following code. This is a recursive descent syntax paser in C.

P ::= S
S ::= V:=E | read(V) | write(V) | while C do S od | S;S
C ::= E < E | E > E | E = E | E <> E | E <= E | E >= E
E ::= T | E + T | E - T
T ::= F | T * F | T / F
F ::= (E) | N | V
V ::= a | b | … | y | z | aV | bV | … | yV | zV
N ::= 0 | 1 | … | 8 | 9 | 0N | 1N | … | 8N | 9N

This code is to define the tokens
*/
#ifndef FRONT_H
#define FRONT_H

/* Character classes */
#define LETTER 0
#define DIGIT 1
#define OPERATOR 2
#define UNKNOWN 99

/* Token codes */
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26

//operations and keyword token codes
#define LESSER_OP 27
#define GREATER_OP 28
#define EQUAL_OP 29
#define NEQUAL_OP 30
#define LEQUAL_OP 31
#define GEQUAL_OP 32
#define SEMICOLON 33
#define KEY_READ 34
#define KEY_WRITE 35
#define KEY_WHILE 36
#define KEY_DO 37
#define KEY_OD 38


//declare lex
int lex();

#endif
