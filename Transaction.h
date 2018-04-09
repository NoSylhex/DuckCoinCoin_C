#ifndef __TRANSACTION_H__
#define __TRANSACTION_H__

#define MAX_VALUE 10

typedef struct s_transaction *Transaction ; 
/**
 * @Transaction structure 
 */
typedef struct s_transactionDeque *TransactionDeque ;
/**
 * @ création de transaction
 */
char * create_transaction() ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @return [description]
 */
 TransactionDeque init_transaction_deque() ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param transaction [description]
 * @return [description]
 */
 Transaction get_transaction(TransactionDeque t_deque, int num_tr) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param transaction [description]
 * @return [description]
 */
void set_hash_transaction(Transaction  transaction) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param transaction [description]
 * @return [description]
 */
char * get_hash_transaction(Transaction transaction) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param t [description]
 */
void add_transaction_to_transactionDeque(TransactionDeque t) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param transaction [description]
 */
void remove_transaction(TransactionDeque t, int index) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param t [description]
 */
void delete_transaction_deque(TransactionDeque t) ;
/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param transaction [description]
 * @return [description]
 */
int get_index(Transaction transaction) ;

#endif