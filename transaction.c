/*
j’ai créé la structure pour faire une liste avec sentinelle comme c’est demandé, Je ne rien changé, j’ai seulement ajouté la structure et quelque fonction. Pour la version 1 j’ai fait une seule fonction qui renvoi une chaîne de caractères et pour la version 2 j’ai fait de fonctions qui réalisent des opérations sur les listes.
Par contre je n’ai rien changé dans le .h parce que je ne suis pas en vie ;)
*/
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "sha256_utils.h"
#include "Transaction.h"


/* ce module ne servira que pour l'étape deux, pour l'étape un il suffira juste d'écrire la chaine
 * "Source-Destination : " avec la fonction rand pour le chiffre de la transaction */


/********FONCTION DE CREATION DE DATE*************/

char * getTimeStamp(){
	time_t ltime;
	time(&ltime);
	return ctime(&ltime);
}

/*************************************************/
/* Structure pour l’étape 2 */
typedef struct s_transaction {
	struct s_transaction next ;
	struct s_transaction prev ;
	int index ;
	char *srcDest ;
} *Transaction ;

struct s_transactionDeque {
	struct s_transaction *sentinel ;
	int size ;
} ;

/****************************************************/

// elle devrait prendre son index en params, le nom de son emetteur, destinataire,
// amount et la signature de son emetteur ?
char *create_transaction() {
	char transaction[30] = "Source-Destination : ” ;
	srand(time(NULL)) ;
	sprintf(transaction,”%s%d”,transaction,rand()%MAX_VALUE) ;
	return (transaction) ;
}

TransactionDeque init_transaction_deque() {
	TransactionDeque t = malloc(sizeof(struct s_transactionDeque)) ;
	t->sentinel = malloc(sizeof(struct s_transaction)) ;
	t->sentinel->next = t->sentinel ;
	t->sentinel->previous = t->sentinel ;
	t->size = 0 ;
	return t ;
}


/****************************************************/
void remove_transaction(TransactionDeque t, int index) { // fonction pour transaction dequeue par pour ce module
	Transaction *itr = t->sentinel->next ;
	while (--index) {
		itr = itr->next ;
	}
	itr->prev->next = itr->next ;
	itr->next->prev = itr->prev ;
	free(itr) ;
}


char * has_transaction(Transaction  transaction) {
	/*char hash[SHA256_BLOCK_SIZE*2 + 1] ;
char *str = strcat(str,transaction->tous les champs);
	sha256ofString(str, hash) ;*/
}

int get_index(Transaction transaction) {
	return transaction->randomNumber ;
}

