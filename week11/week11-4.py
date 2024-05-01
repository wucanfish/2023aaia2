#LC 2000
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):#找到字母
            if word[i]==ch:#找到字母了 這時I很重要
                return word[i::-1]+word[i+1:] #python 特殊寫法
        #如果沒有提早結訴究回傳原來的自
        return word