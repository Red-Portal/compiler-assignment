/****************************************************/
/* File: symtab.h                                   */
/* Symbol table interface for the TINY compiler     */
/* (allows only one symbol table)                   */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef SYMTAB_H
#define SYMTAB_H

#include <stdio.h>

struct ActivationRecord;

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert(char* name, struct ActivationRecord* record);

/*
 * Enter 
 */ 
void st_enter_scope();

/*
 * Stack a new symbol table scope
 */ 
void st_exit_scope();

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
int st_lookup(char* name);

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE* listing);

#endif
