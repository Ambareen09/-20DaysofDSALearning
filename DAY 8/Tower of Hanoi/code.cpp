void towerOfHanoi(int n, char from_rod, 
                    char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  

//T(n)= 2T(n-1) +1
