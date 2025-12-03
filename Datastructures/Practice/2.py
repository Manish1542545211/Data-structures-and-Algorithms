arr=[5,1,4,2,8]
a= list(arr.copy())
a.sort()
n=len(arr)
def Bubblesort(arr,n):
    isswap=False
    Pass=0
    for i in range(0,n-1,1):  
        Pass=Pass+1
        for j in range(0,n-i-1,1):
            
            if(arr[j]>arr[j+1]):
                isswap=True
                arr[j],arr[j+1]=arr[j+1],arr[j]
        
        print(Pass)
        print(arr)
        if(arr==a):
             return

    if(isswap==False):
            print("array already sorted")

Bubblesort(arr,n)

