def maxProfit(prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        p=0
        q=0
        for i in prices:
            if p<i or p==0:
                p=i
            if (q>i and i!=p) or q==0:
                q=i
        return (q,p)
n=[7,1,5,3,6,4]
print(maxProfit(n))