#!/usr/bin/env python
import sys

class Node:
  def __init__(self,data,nextNode=None):
    self.data = data
    self.nextNode = nextNode

  def getData(self):
    return self.data

  def setData(self,val):
    self.data = val

  def getNextNode(self):
    return self.nextNode

  def setNextNode(self,val):
    self.nextNode = val

class LinkedList:

  def __init__(self,head = None):
    self.head = head
    self.size = 0

  def getSize(self):
    return self.size

  def addNode(self,data):
    newNode = Node(data,self.head)
    self.head = newNode
    self.size+=1
    return True

  def printNode(self):
    curr = self.head
    while curr:
      print(curr.data)
      curr = curr.getNextNode()

  def searchNode(self,data):
    current=self.head;
    found=False;
    while current and found is False:
      if current.getData() == data:
        found=True;
      else:
        current=current.getNextNode();
    if current is None:
      raise ValueError("Data is not in list");
    return current.data

  def getNextItem(self,data):
    current=self.head
    current.count=-1
    recent=self.head
    currentSize=self.size
    found=False
    while current and found is False:
      if current.getData() == data:
        found=True;
      else:
        recent=current.data
        current=current.getNextNode();
        currentSize-=1
      if current is None:
        raise ValueError("Data is not in list");
    recent=recent[:-1]
    return currentSize+1,recent;

if __name__=='__main__':

  sys.argv=sys.argv[1:];
  fileName=sys.argv[0]
  file=open(fileName,"r");
  NameArray=file.readlines();
  NameArray.sort()

  llist=LinkedList()

  for Elem in NameArray:
    llist.addNode(Elem)

  print("Current Name: ",llist.searchNode(sys.argv[1]+"\n"))
  print("Larger Name: ",llist.getNextItem(sys.argv[1]+"\n"))

