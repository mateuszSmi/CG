#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  stos.py


class Stack:
	def __init__(self):
		self.items = []
	def isEmpty(self):
		return self.items == []
	def push(self, item):
		self.items.append(item)
	def pop(self):
		return self.items.pop()
	def size(self):
		return len(self.items)



    

def main(args):
	s=Stack()
	print(s.isEmpty())
	s.push(4)
	s.push(15)
	s.push('kot')
	print(s.isEmpty())
	print(s.size())
	s.push(8.4)
	print(s.pop())
	print(s.pop())
	print(s.pop())
	print(s.pop())
	print(s.isEmpty())
	print(s.size())
		
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
