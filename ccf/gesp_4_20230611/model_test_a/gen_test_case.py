from random import randrange, random
from time import sleep, time
from os import system


PROBLEM_TITLE = 'a'
TESTCASE_NUM = 10


print('Compiling answer code')
system(f'g++ std_{PROBLEM_TITLE}.cpp -o std_{PROBLEM_TITLE}')

for i in range(1, TESTCASE_NUM + 1):
	print(f'Generate test case #{i:02}')
	with open(f'{PROBLEM_TITLE}{i:02}.in', 'w') as f:
		# different test cases
		if (i <= 5):
			a = randrange(11, 50)
			b = randrange(a, 100)
		else:
			a = randrange(11, 20)
			b = randrange(80, 100)
		f.write(f'{a} {b}\n')
	system(f'cat {PROBLEM_TITLE}{i:02}.in | ./std_{PROBLEM_TITLE} > {PROBLEM_TITLE}{i:02}.ans')
	print('Done')
	sleep(0.3)

system(f'rm std_{PROBLEM_TITLE}')
print('Removed answer executable file')
