#include <string>
#include <iostream>
#include <cstring>

// Macros
/**
 * @brief les macros
 * \def print(a)
 * \def println(a)
 * \def p(a,b,swap)
 */
#define print(a) std::cout << a;
#define println(a) std::cout << a << "\n";
#define p(a,b,swap) swap=a;a=b;b=swap;

// exo du td1
int power(int x, int n);
int binaryPower(int x, int n);
int PGCD(int a, int b);
bool palindromeREC(std::string mot, int rec, bool res);
bool palindromeITER(std::string mot);
int isPalindromeRecursion(char s[], int first, int last);
int isPalindrome(char s[]);

/**
 * @brief algortihmes de tri par bulle
 * 
 * @param array tableau
 * @param size taille du tableau
 */
void bubleSort(int array[], int size);

/**
 * @brief algortihmes de tri par insertion
 * 
 * @param array tableau
 * @param size taille du tableau
 */
void insertinSort(int array[], int size);

/**
 * @brief algortihmes de tri par selection
 * 
 * @param array tableau
 * @param size taille du tableau
 */
void selectionSort(int array[], int size);

/**
 * @brief algorithme de tri rapide
 * 
 * @param array le tableau à trier
 * @param lo 0
 * @param hi taille du tableau
 */
void quickSort(int array[], int lo, int hi);
int _partition(int *array, int lo, int hi);

/**
 * @brief algorithm for efficient merge sort of an array
 * 
 * @param arraytoSort the array to sort
 * @param arrayforWork a work array same size as sort array
 * @param size the size of the array to sort
 */
void mergeSort(int *arraytoSort, int *arrayforWork, int size);
void splitMerge(int *B, int begin, int end, int *A);
void merge(int *A, int begin,int middle, int end, int *B);
void copyArray(int *A,int start, int end, int *B);