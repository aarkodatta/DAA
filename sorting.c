int main(void) 
{ 
    int arr[] = {10, 22, 35, 40, 45, 50, 80, 82, 
                 85, 90, 100}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int x = 85; 
    printf("Found at index: %d", 
            fibMonaccianSearch(arr, x, n)); 
    return 0; 
} 
