#LC988
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        table="abcdefghijklnmopqrstuvwxyz"
        def helper(root,nowStr):
            #if root ==None : return nowStr #樹下沒有東西時右邊累積字串，就是結果
            nextStr = table[root.val]+nowStr 
            if root.left==None and root.right==None :return nextStr#最後葉子沒有左右
            if root.left ==None:return helper(root.right,nextStr) #左邊空的。只能往又跑
            if root.right ==None:return helper(root.left,nextStr)#右邊空的，只能往左
            left =helper(root.left,nextStr)#左邊結果
            right=helper(root.right,nextStr)#右邊結果
            return min(left,right)#結果小的當答案，return回去
        #print("table[0] is",table[0])
        #print("table[25] is",table[25])
        return helper(root,'')
        