p=[0,0,0,0,0,0,0,0,0]
i=[0,1,2,3,4,5,6,7,8]
import time

def draw():
    counter=0
    for place in p:
        if(place==0):
            counter+=1
    if(counter==0):
        print("Draw!")
        return True
    else:
        return False

def board():
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
    while(True):
      x2 = int(input("player1:"))
      if(x2%2!=0) and (1<=x2<=9):
              x1=int(input("Enter the location number:"))
              if((x1 in i)==False):
                print ("the location is occupied !")

                x1=int(input("enter again the location again:"))
                
              move(x2,x1)
              i.remove(x1)
              break
      else:
          print("Please enter an odd number from 1 to 9")
    return True

def player2():
    while(True):
        x2 = int(input("Player2:"))
        if(x2%2==0)and (1<=x2<=9):
            x1 = int(input("Enter the location number:"))
            
            if((x1 in i)==False):
                
                print ("the location is occupied !")
                x1=int(input("enter the location again:"))
            move(x2,x1)
            i.remove(x1)
            break
        else:print("Please enter an even number from 1 to 9")
    return True

def winner():
     if(p[0] + p[1] + p[2]==15 or p[0]+p[3]+p[6]==15 or p[3]+p[4]+p[5]==15 or p[6]+p[7]+p[8]==15 or p[1]+p[4]+p[7]==15 or p[2]+p[5]+p[8]==15 or p[0]+p[4]+p[8]==15 or p[2]+p[4]+p[6]==15):
        print ('you are the winner')
        return True
     else:
        return False


while(True):
    p=[0,0,0,0,0,0,0,0,0]
    i=[0,1,2,3,4,5,6,7,8]
    print("Hello to the game Tic Tac Toe")
    rules()
    board()
    while(True):
         player1()
         if winner():break
         elif draw():break
         else:
              player2()
              if winner():break
              if draw(): break
    time.sleep(10)




















