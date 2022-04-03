# importing libraries
from PyQt5.QtWidgets import * 
from PyQt5 import QtCore, QtGui
from PyQt5.QtGui import * 
from PyQt5.QtCore import * 
import sys
from random import randint 
from random import seed 
  
class Window(QMainWindow):
  
    # list of numbers
    number = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,  13, 14, 15, 18, 20]
  
    def __init__(self):
        super().__init__()
  
        # setting title
        self.setWindowTitle("Binary search ")
  
        # setting geometry
        self.setGeometry(100, 100, 800, 600)
  
        # calling method
        self.UiComponents()
  
        # showing all the widgets
        self.show()
  
        seed(30)
  
    # method for widgets
    def UiComponents(self):
  
        # start flag
        self.start = True
  
        # list to hold labels
        self.label_list = []
    
        # desired value
        self.desired = randint(0,20)
  
        # binary search variable
        self.first = 0
        self.last = len(self.number) - 1
        self.mid = 0
  
        # local counter
        c = 0
  
        # iterating list of numbers
        for i in self.number:
  
            # creating label for each number
            label = QLabel(str(i), self)
            
            label2 = QLabel(str(c), self)
  
            # adding background color and border
            label.setStyleSheet("border : 1px solid black; background : white;")
  
            
  
            # aligning the text
            label.setAlignment(Qt.AlignTop)
            label2.setAlignment(Qt.AlignTop)
  
  
  
            # setting geometry using local counter
            # first parameter is distance from left and 
            # second is distance from top
            # third is width and forth is height
            label.setGeometry(50 + c * 30, 50, 25, i * 10 + 10)
  
            label2.setGeometry(60 + c * 30 , 20, 25,  20)
  
            # adding label to the label list
            self.label_list.append(label)
            
  
            # incrementing local counter
            c = c + 1
  
  
        # creating push button to start the search
        self.search_button = QPushButton("Start Search", self)
  
        # setting geometry of the button
        self.search_button.setGeometry(100, 270, 100, 30)
  
        # adding action to the search button
        self.search_button.clicked.connect(self.search_action)
  
        # creating push button to pause the search
        pause_button = QPushButton("Continue", self)
  
        # setting geometry of the button
        pause_button.setGeometry(100, 320, 100, 30)
  
        # adding action to the search button
        pause_button.clicked.connect(self.pause_action)
  
        # creating label to show the result
        self.result = QLabel("", self)
        
        # creating label to show the result
        self.result2 = QLabel("", self)
        
        
        self.start = False
  
        # setting geometry
        self.result.setGeometry(350, 280, 400, 40)
  
        # setting geometry
        self.result2.setGeometry(350, 320, 400, 40)
  
  
        # setting style sheet
        self.result.setStyleSheet("border : 3px solid black;")
  
        # setting style sheet
        self.result2.setStyleSheet("border : 3px solid black;")
  
        
        # adding font
        self.result.setFont(QFont('Times', 10))
  
        self.result2.setFont(QFont('Times', 10))
  
  
        # setting alignment
        self.result.setAlignment(Qt.AlignCenter)
        
        self.result2.setAlignment(Qt.AlignCenter)
  
  
        # creating a timer object
        timer = QTimer(self)
  
        # adding action to timer
        timer.timeout.connect(self.showTime)
  
        # update the timer every 300 millisecond
        timer.start(300)
  
	# method called by timer
    def showTime(self):
  
        # checking if flag is true
        if self.start:
            # implementing binary search
            # finding mid index
            self.mid = (self.first + self.last)//2
            
            
            # if first index become greater than last index
            if self.first > self.last:
                
                print("ok")
                
               
  
                # show output in result label
                self.result.setText("Valor não encontrando  ")
  
                 # make flag false
                self.start = False
                
                
                
                
            # if mid value is equal to the desired value
            if self.number[self.mid] == self.desired:
  
                # make flag false
                self.start = False
  
                # show output in result label
                self.result2.setText("Encontrando na posição : " + str(self.mid))
  
                # set color of label to green
                self.label_list[self.mid].setStyleSheet(
                              "border : 2px solid green; "
                              "background-color : lightgreen")
                              
                
                
                
                         
  
            # if not equal to mid value
            else:
                # make color grey
                self.label_list[self.mid].setStyleSheet(
                                   "border : 1px solid black; "
                                   "background-color : grey")
  
            # mid value is higher
            if self.number[self.mid] > self.desired:
                # change last index
                self.last = self.mid - 1
                self.result2.setText("valor desejado está no subvetor [ " + str(self.first) + " , " + str(self.last)  + " ] ")           
                self.start = False
                	
            # if mid value is smaller
            if self.number[self.mid] < self.desired:
                # change first index
                self.first = self.mid + 1
                self.result2.setText("valor desejado está no subvetor [ " + str(self.first) + " , " + str(self.last)  + " ] ") 
                self.start = False
                
  
  
    # method called by search button
    def search_action(self):
  
        # making flag true
        self.start = True
  
        # showing text in result label
        #self.result.setText("Started searching...")
        
        self.first = 0
        self.last = len(self.number) - 1
        self.desired = randint(0,20)
        
        for x in range(self.first, self.last + 1):
            self.label_list[x].setStyleSheet("border : 1px solid black; background : white;")
        
        self.result.setText("To search : " + str(self.desired))
        
  
    # method called by pause button
    def pause_action(self):
  
        # making flag false
        self.start = True
  

        
  
# create pyqt5 app
App = QApplication(sys.argv)
  
# create the instance of our Window
window = Window()
  
# start the app
App.exec()

#sys.exit(App.exec())
