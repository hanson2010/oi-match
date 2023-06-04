from random import randrange, random
from time import sleep, time
from os import system


PROBLEM_TITLE = 'b'
TESTCASE_NUM = 10


print('Compiling answer code')
system(f'g++ std_{PROBLEM_TITLE}.cpp -o std_{PROBLEM_TITLE}')

for i in range(1, TESTCASE_NUM + 1):
	print(f'Generate test case #{i:02}')
	with open(f'{PROBLEM_TITLE}{i:02}.in', 'w') as f:
		# different test cases
		f.write(f'{1 + 2 * i}\n')
	system(f'cat {PROBLEM_TITLE}{i:02}.in | ./std_{PROBLEM_TITLE} > {PROBLEM_TITLE}{i:02}.ans')
	print('Done')
	sleep(0.3)

system(f'rm std_{PROBLEM_TITLE}')
print('Removed answer executable file')
