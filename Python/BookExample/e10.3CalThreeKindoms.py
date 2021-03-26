# coding=gbk
import jieba
excludes = {"����", "ȴ˵", "����",
            "����", "����", "����", "���"}
txt = open("E:\Study\Projects\MyCode\Python\BookExample\��������.txt",
           "r", encoding='gbk').read()
words = jieba.lcut(txt)
counts = {}
for word in words:
    if len(word) == 1:
        continue
    elif word == "�����" or word == "����Ի":
        rword = "����"
    elif word == "�ع�" or word == "�Ƴ�":
        rword = "����"
    elif word == "����" or word == "����Ի":
        rword = "����"
    elif word == "�ϵ�" or word == "ة��":
        rword = "�ܲ�"
    else:
        rword = word
    counts[rword] = counts.get(rword, 0) + 1
    # get��ʾcountsԪ�����ֵ����1�����û�У��򴴽��µ�ֵΪ0������1
for word in excludes:
    del(counts[word])
items = list(counts.items())
# items�Ǽ�ֵ����ɵ��б���ֵ����Ԫ�����ʽ�洢��key=...��˼����Ԫ��ĵڶ���Ԫ������������
items.sort(key=lambda x: x[1], reverse=True)
for i in range(25):
    word, count = items[i]
    print("{0:<10}{1:>5}".format(word, count))
