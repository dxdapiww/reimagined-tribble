import jieba
txt=open("C:\\Users\\90374\\Code\\reimagined-tribble\\python水浒传.txt","r",encoding='utf-8').read()
excludes = {"一个","两个","只见","如何","那里","哥哥","军马","头领","众人","这里",
"兄弟","出来","小人","这个","今日","说道","人马","问道","便是","先锋"}
words = jieba.lcut(txt)
counts = {}
for word in words:
    if len(word) == 1:
        continue
    elif word == "呼保义" or word == "及时雨" or word == "宋江道":
        rword =="宋江"
    elif word == "黑旋风" or word == "铁牛":
        rword == "李逵"
    elif word == "行者" or word == "打虎英雄":
        rword == "武松"
    elif word == "豹子头" or word == "林教头":
        rword == "林冲"           
    elif word == "智多星":
        rword == "吴用"
    elif word == "玉麒麟":
        rword == "卢俊义"    
    else:
        rword = word
    counts[word] = counts.get(rword,0) + 1
for word in excludes:
    del counts[word]         
items = list(counts.items())
items.sort(key=lambda x:x[1], reverse=True) 
for i in range(20):
    word, count = items[i]
    print ("{0:<10}{1:>5}".format(word, count))