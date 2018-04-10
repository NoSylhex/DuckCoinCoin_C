#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include "sha256.h"
#include "sha256_utils.h"
#include "Transaction.h"


int main(int argc, char const *argv[]) {
	srand(time(NULL)) ;
	TransactionDeque tr_deque = init_transaction_deque() ;
	for (int i = 0; i < 10; ++i)
		add_transaction_to_transactionDeque(tr_deque) ;
	Transaction t1 = get_transaction(tr_deque,3) ;
	printf("Hash de la transaction n°%d : %s\n",get_index(t1), get_hash_transaction(t1)) ;
	remove_transaction(tr_deque,2) ;
	printf("Taille de la deque : %d\n",get_size_transactionDeque(tr_deque) ) ;
	Transaction t2 = get_transaction(tr_deque,3) ;
	printf("Hash de la transaction n°%d : %s\n",get_index(t2), get_hash_transaction(t1)) ;
	delete_transaction_deque(tr_deque) ;
	printf("%d	%d\n", get_index(t1), get_index(t2));
	return 0 ;
}