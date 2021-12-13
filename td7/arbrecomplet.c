#define true 1 	     		 	    	 	 
#define false 0 	     		 	    	 	 
 	     		 	    	 	 
int isComplete(Node * tree){ 	     		 	    	 	 
    if(tree==NULL){ 	     		 	    	 	 
        return true; 	     		 	    	 	 
    } 	     		 	    	 	 
    if(tree->right!=NULL && tree->left!=NULL){ 	     		 	    	 	 
        return isComplete(tree->right)&&isComplete(tree->left); 	     		 	    	 	 
    } 	     		 	    	 	 
    return (tree->right==NULL || tree->left!=NULL); 	     		 	    	 	 
} 	     		 	    	 	 