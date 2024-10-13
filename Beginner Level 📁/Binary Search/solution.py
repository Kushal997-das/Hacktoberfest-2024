def search_in_a_rotated_sorted_array(arr,n,target):
    low,high=0,n-1
    while low<=high:
        mid=(low+high)//2
        if arr[mid]==target:
            return mid
        elif arr[low]<=arr[mid]: #left is sorted
            if arr[low]<=target and target<=arr[mid]:
                high=mid-1
            else:
                low=mid+1
        else: #right is sorted
            if arr[mid]<=target and target<=arr[high]:
                low=mid+1
            else:
                high=mid-1
    return -1

arr=list(map(int,input("Enter the list of numbers : ").split()))
target=int(input("Enter the target number you need to search : "))
print("The target is found in : ",search_in_a_rotated_sorted_array(arr,len(arr),target))
