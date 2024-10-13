def search_insert(nums,n,target):
    low=0
    high=n-1
    ans=n
    while low<=high:
        mid=(low+high)//2            
        if nums[mid]>=target:
            ans=mid
            high=mid-1
        else:
            low=mid+1
    return ans

nums=list(map(int,input("Enter the list of numbers : ").split()))
target=int(input("Enter the target number you need to search : "))
print("The lower bound is : ",search_insert(nums,len(nums),target))
