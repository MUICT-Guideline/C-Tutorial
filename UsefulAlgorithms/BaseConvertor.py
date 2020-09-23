# given string of integer of any base
# turn into base 10
# This logic can perform any base n, but you need to put all symbols to n if base >= 10

def toBaseTen(s=str, base=int):
    symbols = {'A': '10', 'B': '11', 'C': '12',
               'D': '13', 'E': '14', 'F': '15'}
    result = 0
    index = 0
    for i in reversed(range(len(s))):
        convert = s[index]
        if convert in symbols:
            convert = symbols.get(convert)
        result += (int(convert)*(base ** i))
        index += 1
    return result


def tenToAnyBase(s=int, base=int):
    symbols = {10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F'}
    result = ''
    mod = base + 1
    while base <= s:
        mod = s % base
        s = s // base
        if mod >= 10:
            mod = symbols.get(mod)
        result += str(mod)
    result += str(s)
    return result[::-1]

# operation
# anybase --> baseTen --> operate --> anybase


def operate(anybase1=str, base1=int, oper=str, anybase2=str, base2=int, toBase=int):
    a = toBaseTen(anybase1, base1)
    b = toBaseTen(anybase2, base2)
    if oper == '+':
        return tenToAnyBase(a+b, toBase)
    elif oper == '-':
        return tenToAnyBase(a-b, toBase)
    elif oper == '*':
        return tenToAnyBase(a*b, toBase)
    elif oper == '/':
        return tenToAnyBase(a/b, toBase)


base2 = '10011101'
base3 = '12211'
base4 = '2131'
base8 = '235'
base5 = '233'
base16 = '2F1'
base15 = '3A4B'
# print(toBaseTen(base5, 5))
# print(toBaseTen(base2, 2))
# print(toBaseTen(base3, 3))
# print(toBaseTen(base4, 4))
# print(toBaseTen(base8, 8))
# print(tenToAnyBase(157, 2))
# print(tenToAnyBase(157, 3))
# print(tenToAnyBase(157, 4))
# print(tenToAnyBase(157, 8))
# print(toBaseTen(base15, 15))
# print(toBaseTen(base16, 16))
# print(tenToAnyBase(12446, 15))
# print(tenToAnyBase(753, 16))
