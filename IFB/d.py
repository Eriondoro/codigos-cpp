import re

daniel = input()

x = re.sub(r'\bdaniel sad\b', 'daniel saad', daniel)
x = re.sub(r'\bDaniel Sad\b', 'Daniel Saad', x)
x = re.sub(r'\bDANIEL SAD\b', 'DANIEL SAAD', x)

print(x)