int mySqrt(int x) {
    int low, high;      //Declare low and high variables for binary search
    low = 1, high = x;  //Set low to 1 , high to x, these are limits for Binary Search

    while( low <= high){   
        long long mid = low + high/2; //Declare mid variable for Binary Search and set it to   
        long long sqrt = mid*mid;     //Declare a root variable for x and set it to mid ^ 2
        if ( sqrt <= x){              
            sqrt = (mid+1) * (mid+1); //ChatGPT :)

            if(sqrt <= x)     
            {
                low = mid+1;  //Since sqrt variable is smaller than x, we should make it larger
            }

            else              
                return mid;   //if sqrt variable and x is equal return mid variable  
        }  

        else if (sqrt > x)    
            high = mid-1;    //Since sqrt variable is larger than x, we should make it smaller
    }    
        return 0;          
}
