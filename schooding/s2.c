
// Longueur d’une chaîne

// Écrire la fonction int length(char * s) qui prend une chaîne de caractères en paramètre et qui retourne sa taille. 
int length(char * s) { 	     		 	    	 	 
    return strlen(s); 	     		 	    	 	 
} 	     		 	    	 	 
// Nombre d'occurrences

// Écrire la fonction int count (char * s, char c) qui compte le nombre d'occurrences du caractère c dans la chaîne de caractères s.
// retourne le nombre d'occurrences du caractère c dans la chaîne de caractères s. 	     		 	    	 	 
int count(char * s, char c) { 	     		 	    	 	 
    auto sum=0; 	     		 	    	 	 
    for(int i=0;i<strlen(s);i++){ 	     		 	    	 	 
        if(s[i]==c){ 	     		 	    	 	 
            sum++; 	     		 	    	 	 
        } 	     		 	    	 	 
    } 	     		 	    	 	 
    return sum; 	     		 	    	 	 
} 	     		 	    	 	 

// Comparaison entre deux chaînes

// Écrire la fonction int compare(char *s1, char *s2) qui prend en paramètre deux chaînes de caractères, s1 et s2, et qui compare les deux chaînes entre elles. La fonction va retourner :

//     -1 si s1 est placée avant s2 dans l'ordre alphabétique ;
//     0 si s1 est égale à s2 ;
//     1 si s1 est placée après s2 dans l'ordre alphabétique. 
int compare(char *s1, char *s2) { 	     		 	    	 	 
    int i=0; 	     		 	    	 	 
    while((i<strlen(s1)&&(i<strlen(s2)))){ 	     		 	    	 	 
        if(s1[i]!=s2[i]){ 	     		 	    	 	 
            return ((s1[i]-s2[i])>0)-((s1[i]-s2[i])<0); 	     		 	    	 	 
        } 	     		 	    	 	 
        i++; 	     		 	    	 	 
    } 	     		 	    	 	 
    if(strlen(s1)!=strlen(s2)){ 	     		 	    	 	 
        if(i==strlen(s1)){ 	     		 	    	 	 
            return -1; 	     		 	    	 	 
        } 	     		 	    	 	 
        if(i==strlen(s2)){ 	     		 	    	 	 
            return 1; 	     		 	    	 	 
        } 	     		 	    	 	 
    } 	     		 	    	 	 
 	     		 	    	 	 
    return 0; 	     		 	    	 	 
} 	     		 	    	 	 
