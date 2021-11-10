import jieba
import jieba.posseg as psg
txt=open("C:\\Users\\90374\\Code\\reimagined-tribble\\python\\水浒传.txt","r",encoding='utf-8').read()
words = psg.lcut(txt)
counts = {}
for word in words:
    if len(word.word) == 1:
        continue
    elif word.flag == "nr":
        counts[word] = counts.get(word,0) + 1
items = list(counts.items())
items.sort(key=lambda x:x[1], reverse=True) 
for i in range(20):
    word, count = items[i]
    print (word,count)