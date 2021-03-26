# coding=gbk
import jieba
excludes = {"将军", "却说", "荆州",
            "二人", "不可", "不能", "如此"}
txt = open("E:\Study\Projects\MyCode\Python\BookExample\三国演义.txt",
           "r", encoding='gbk').read()
words = jieba.lcut(txt)
counts = {}
for word in words:
    if len(word) == 1:
        continue
    elif word == "诸葛亮" or word == "孔明曰":
        rword = "孔明"
    elif word == "关公" or word == "云长":
        rword = "关羽"
    elif word == "玄德" or word == "玄德曰":
        rword = "刘备"
    elif word == "孟德" or word == "丞相":
        rword = "曹操"
    else:
        rword = word
    counts[rword] = counts.get(rword, 0) + 1
    # get表示counts元组里的值增加1，如果没有，则创建新的值为0，增加1
for word in excludes:
    del(counts[word])
items = list(counts.items())
# items是键值对组成的列表，键值对以元组的形式存储，key=...意思是以元组的第二个元素来进行排列
items.sort(key=lambda x: x[1], reverse=True)
for i in range(25):
    word, count = items[i]
    print("{0:<10}{1:>5}".format(word, count))
