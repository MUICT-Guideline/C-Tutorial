# given arbitary words
# print _ _ _ _.....n
# if input match with any words in _ _ _
# print words _ _ _ _ _
# can't be more than 10
# 0 == incorrect yet
# 1 == correct
# 2 == space
import random


def plusS(status=list, splt=list):
    for i in range(len(status)):
        if status[i] == 0:
            yield '_ '
        elif status[i] == 1:
            yield splt[i]
        else:
            yield ' '


def interface(status=list, splt=list):
    s = ''
    for i in plusS(status, splt):
        s += i
    return s


def hangMan():
    # list of all words
    words = ['test', 'python', 'C tutorial']
    # random word
    word = random.choice(words)
    splt = [i for i in word]
    stat = []
    for i in range(len(splt)):
        if splt[i] != ' ':
            stat.append(0)
        else:
            stat.append(2)
    s = interface(stat, splt)
    win = False
    count = 0
    print(s)
    while count < 10:
        guess = ''
        intCase = True
        while len(guess) != 1 or intCase == True:
            guess = input('')
            try:
                test = int(guess)
                if test != 'Test for intger case':
                    print("Please enter only character")
            except:
                if len(guess) != 1:
                    print("Please enter 1 char")
                else:
                    intCase = False
        for i in range(len(splt)):
            if guess.upper() == splt[i] or guess.lower() == splt[i]:
                stat[i] = 1
        s = interface(stat, splt)
        print(s)
        if 0 not in stat:
            win = True
            print("Winner!!")
            break
        count += 1
    if not win:
        print("Lose")


hangMan()
