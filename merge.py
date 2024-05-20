a=[5,90,6,78,34,56,2,9]
def mergesort(L):
    if len(L)<2:
        return L[:]
    else:
        middle=len(L)//2
        left=mergesort(L[:middle])
        right =mergesort( L[middle:])
        return merge(left,right)
def merge(left,right):
    res=[]
    i,j=0,0
    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            res.append(left[i])
            i=i+1
        else:
            res.append(right[j])
            j=j+1
    while i<len(left):
        res.append(left[i])
        i=i+1
    while j<len(right):
        res.append(right[j])
        j=j+1
    return res
print(mergesort(a))      
