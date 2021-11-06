import pandas
import math


def judge(inputdata):
    a = inputdata.isdigit()
    return a


def getNum():
    nums = []
    iNumStr = input("请输入成绩(满分100，回车退出): ")
    while iNumStr != "":
        if judge(iNumStr) == False:
            iNumStr = ''
            iNumStr = input("请勿输入非数字(满分100，回车退出): ")
        else:
            nums.append(eval(iNumStr))
            iNumStr = input("请输入成绩(满分100，回车退出): ")
    return nums


def mean(numbers):
    s = 0.0
    for num in numbers:
        s = s + num
    return s / len(numbers)


def dev(numbers, mean):
    sdev = 0.0
    for num in numbers:
        sdev = sdev + (num - mean)**2
    return pow(sdev / (len(numbers)-1), 0.5)


def median(numbers):
    sorted(numbers)
    size = len(numbers)
    if size % 2 == 0:
        med = (numbers[size//2-1] + numbers[size//2])/2
    else:
        med = numbers[size//2]
    return med


def maxn(numbers):
    return max(numbers)


def minn(numbers):
    return min(numbers)


n = getNum()
bins = [0,60,70,80,90,101]
labels = ['[0,59]', '[60,69]', '[70,79]', '[80,89]', '[90,100]']
cats1 = pandas.cut(n,labels=labels,bins=bins, right=False)
print(cats1.value_counts())
print("最大值:{},最小值:{},平均值:{:.2},标准差:{:.2},中位数:{}.".format(
    maxn(n), minn(n), mean(n), math.sqrt(dev(n, mean(n))), median(n)))
