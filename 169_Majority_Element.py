def majorityElement(nums):
    hash_table={}
    BigVal=0
    BigKey=0
    for i in nums:
        hash_table[i]=hash_table[i]+1 if (i in hash_table) else 1
    for key,value in hash_table.items():
        if value>BigVal:
            BigKey=key
            BigVal=value
    #print(hash_table) 
    #print(BigKey)
    return BigKey

nums=[2,2,1,1,1,2,2]
print(majorityElement(nums))