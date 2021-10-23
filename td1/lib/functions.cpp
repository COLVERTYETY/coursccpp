#include "../include/headers.h"

int power(int x, int n) { // O(n)
    if (n == 0) 
        return 1; 
    return x * power(x, n-1); 
}

int binaryPower(int x, int n) {  // O(log(n)) 
    if (n == 0) 
        return 1; 
    else if (n%2 == 0)  
        return binaryPower(x*x, n/2); 
    else  
        return x*binaryPower(x, n-1); 
} 

int PGCD(int a, int b){
    return b!=0?PGCD(b,a%b):a;
}

bool palindromeREC(std::string mot, int rec=0, bool res=true){
    int length = mot.length()-1;
    if(rec<length/2){
        return palindromeREC(mot, ++rec, res && (mot[rec]==mot[length-rec]));
    }
    return res;
}

bool palindromeITER(std::string mot){
    int length = mot.length()-1;
    bool correct = true;
    for( int i=0;i<length/2;i++){
        if(mot[i]!=mot[length-i]){
            correct = false;
            break;
        }
    }
    return correct;
}

int isPalindromeRecursion(char s[], int first, int last) { 	     		 	    	 	  	     		 	    	 	 
    if(first<strlen(s)/2){ 	     		 	    	 	 
        return (s[first]==s[last])?isPalindromeRecursion(s,++first,--last):0; 	     		 	    	 	 
    }else { 	     		 	    	 	 
        return 1; 	     		 	    	 	 
    } 	     		 	    	 	 	     		 	    	 	  	     		 	    	 	 
} 	     		 	    	 	 

int isPalindrome(char s[]) { 	     		 	    	 	  	     		 	    	 	 
    int length = strlen(s)-1; 	     		 	    	 	 
    int correct = 1; 	     		 	    	 	 
    if(length>0){ 	     		 	    	 	 
        for( int i=0;i<length/2 && correct;i++){ 	     		 	    	 	 
            correct = correct && (s[i]==s[length-i]); 	     		 	    	 	 
        } 	     		 	    	 	 
    } 	     		 	    	 	 
    return correct; 	     		 	    	 	  	     		 	    	 	   		 	    	 	 	     		 	    	 	 
} 	

void bubleSort(int array[], int size){
    int swap = 0;
    int change=1;
    for( int j=size;j>1 && change==1;j--){
        change=0;
        for(int i=0;i<j;i++){
            if(array[i+1]<array[i]) {p(array[i+1],array[i],swap);change=1;}
        }
    }
}

void insertinSort(int *array, int size){
    int x=0;
    for(int i=1;i<size;i++){
        x = array[i];
        int j=i;
        while (j>0 && array[j-1]>x){
            array[j] = array[j-1];
            j--;
        }
        array[j] = x;
    }
}

void selectionSort(int *array, int size){
    int min;
    int swap;
    for(int i=0;i<size-2;i++){
        min = i;
        for(int j=i+1;j<size-1;j++){
            if(array[j]<array[min]) min = j;
        }
        if (min!=i)p(array[i],array[min],swap);
    }
}

void quickSort(int *array, int lo, int hi){
    if( lo >= 0 && hi >=0 && lo<hi){ //if valid op and unsorted
        int p = _partition(array, lo, hi); 
        quickSort(array, lo, p); // left
        quickSort(array, p+1, hi); //right
    }
}

int _partition(int *array, int lo, int hi){
    int swap; // for inversion
    int pivot = array[(hi+lo)/2];
    // left
    int l = lo-1;
    // right
    int r = hi+1;
    // the main loop
    while(true){
        do{l++;}while(array[l]<pivot); // left 
        do{r--;}while(array[r]>pivot); // right
        if(l>=r) return r; // check intersection
        p(array[l],array[r],swap);// actual sort
    }
}

void mergeSort(int *arraytoSort, int *arrayforWork, int size){
    copyArray(arraytoSort,0,size,arrayforWork);
    splitMerge(arrayforWork,0,size,arraytoSort);
}

void splitMerge(int *B, int begin, int end, int *A){
    if(end-begin<=1) return; //end condition for recursion
    // its not over, we have to cut and sort
    int middle = (end+begin)/2;
    splitMerge(A,begin,middle,B);
    splitMerge(A,middle,end,B);
    //now that rec is over, merge
    merge(B,begin,middle,end,A);
}

void merge(int *A, int begin,int middle, int end, int *B){
    int i,j;
    i = begin;
    j = middle;
    for(int k=begin;k<end;k++){
        if(i<middle && (j>=end || A[i]<=A[j])){
            B[k]=A[i];
            i++;
        }else{
            B[k]=A[j];
            j++;
        }
    }
}

void copyArray(int *A,int start, int end, int *B){
    for(int i=start;i<end;i++){
        B[i]=A[i];
    }
}