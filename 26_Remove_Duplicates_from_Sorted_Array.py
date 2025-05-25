def removeDuplicates(nums):

    if not nums:
        return 0
    c=1
    for i in range(1,len(nums)):
        if nums[i]!=nums[i-1]:
            nums[c]=nums[i]
            c+=1

#print(nums)
nums=[0,0,1,1,1,2,2,3,3,4]
print(removeDuplicates(nums))

print(nums)