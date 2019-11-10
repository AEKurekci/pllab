#!/usr/bin/env python
import sys
import tkinter as tk
from tkinter import ttk
from tkinter import filedialog
import os
from threading import Thread

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
class Counter_program():
    def __init__(self):
      self.window = tk.Tk()
      self.window.title("Programing Languages Project Gui Version")
      self.create_widgets()

    def gettingData(self, event=None):
      dataS=self.entrybox_value.get();
      dataS=llist.getNextItem(dataS+"\n")
      dataS="Recent Value-> (Line Number:%s, Data:%s) " % dataS
      reply=self.label.set(format(dataS));
      return reply

    def create_widgets(self):

      self.window['padx'] = 100
      self.window['pady'] = 100
      self.entrybox_value=tk.StringVar()
      self.searchFile_value=tk.StringVar()

      data_frame = ttk.LabelFrame(self.window, text="Data Search", relief=tk.RIDGE)
      data_frame.grid(row=1, column=1, sticky=tk.E + tk.W + tk.N + tk.S)

      button_label = ttk.Label(data_frame, text="Search: ")
      button_label.grid(row=1, column=1, sticky=tk.W, pady=3)

      my_Textbox=ttk.Entry(data_frame, width=40, textvariable=self.entrybox_value)
      my_Textbox.grid(row=1, column=2, sticky=tk.W, pady=5)

      my_button = tk.Button(data_frame, text="Find Data",command=self.gettingData)
      my_button.grid(row=1, column=3)
      self.window.bind("<Return>",self.gettingData);
      my_button.bind("<Button-1>",self.gettingData);

      self.label=tk.StringVar();
      myLabel=ttk.Label(self.window, text='', textvariable=self.label);
      myLabel.grid(row=2, column=1,pady=3,padx=0);

      quit_button = ttk.Button(self.window, text="Quit", command=self.window.destroy)
      quit_button.grid(row=9, column=9)

if __name__=='__main__':

  sys.argv=sys.argv[1:];
  fileName=sys.argv[0]
  file=open(fileName,"r");
  NameArray=file.readlines();
  NameArray.sort()

  #print(NameArray);

  llist=LinkedList()

  for Elem in NameArray:
    llist.addNode(Elem)

  program = Counter_program()

  program.window.mainloop()

