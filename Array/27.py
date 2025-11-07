def removeElement( nums, val):
    """
    :type nums: List[int]
    :type val: int
    :rtype: int
    """
    k=0
    for i in range(len(nums)):
        #print(i)
        if nums[i]!=val:
            nums[k]=nums[i]
            k+=1
        

    return k
nums = [0,1,2,3,0,4]
val = 2

print(removeElement(nums, val))
print(nums)