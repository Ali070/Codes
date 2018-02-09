p=[0,0,0,0,0,0,0,0,0]
import time
def board():
    print(p[0], "|", p[1], '|', p[2])
    print("---------------")
    print(p[3], "|", p[4], "|", p[5])
    print("---------------")
    print(p[6], "|", p[7], "|", p[8])
def New_board():
    print(p[0], "|", p[1], '|', p[2])
    print("---------------")
    print(p[3], "|", p[4], "|", p[5])
    print("---------------")
    print(p[6], "|", p[7], "|", p[8])
def rules():
    print("Player1 should enter odd numbers from 1 to 9 ")
    print("Player2 should enter even numbers from 1 to 9")
    print("The winner is the player who complete a line adds up to 15")
def move(x2,x1):
    p[x1]=x2
    board()
def player1():
    x2 = int(input("player1,enter odd numbers from 1 to 9:"))
    if(x2%2!=0):
         x1=int(input("Enter the location number:"))
         move(x2,x1)
def player2():
    x2 = int(input("Player2,enter even numbers from 1 to 9:"))
    if(x2%2==0):
      x1 = int(input("Enter the location number:"))
      move(x2,x1)
def winner():
    if(p[0] + p[1] + p[2]==15 or p[0]+p[3]+p[6]==15 or p[3]+p[4]+p[5]==15 or p[6]+p[7]+p[8]==15 or p[1]+p[4]+p[7]==15 or p[2]+p[5]+p[8]==15 or p[0]+p[4]+p[8]==15 or p[2]+p[4]+p[6]==15):
        print ('you are the winner')
        return True
    else:
        return False
print("Hello to the game Tic Tac Toe")
rules()
board()

while(True):
    while(True):
     player1()
     if winner():break
     else:
      player2()
      if winner():break
    print("Congratulations")
    break
time.sleep(60)




















