import pygame
from pygame.locals import *
import time
import random

SIZE = 40
class Apple:
    def __init__(self,surface):
        self.img = pygame.image.load("C:\\Users\\91983\\Desktop\\g_resource\\gh.jpg").convert()
        self.surface = surface
        self.block_x = 120
        self.block_y = 120 
    
    # Function for drawing apple on the screen
    def draw1(self):
        self.surface.blit(self.img,(self.block_x,self.block_y))
        pygame.display.flip()
    
    # Function for Generating Apples at different positions 
    def move1(self):
        self.block_x = random.randint(0,24)*SIZE        
        self.block_y = random.randint(0,19)*SIZE 

class Snake:
    def __init__(self,surface,length):
        self.surface=surface
        self.length=length
        self.block = pygame.image.load("C:\\Users\\91983\\Desktop\\g_resource\\kl.png").convert()
        self.block_x = [SIZE]*length   # Array of size length with elements as SIZE
        self.block_y = [SIZE]*length    # Array of size length with elements as SIZE
        self.direction = 'down'

    def move(self):
        # Loop for snake movement
        for i in range(self.length-1,0,-1):
            self.block_x[i]=self.block_x[i-1]
            self.block_y[i]=self.block_y[i-1] 
        if self.direction=='up':
            self.block_y[0] -= SIZE
        if self.direction=='down':
            self.block_y[0] += SIZE
        if self.direction=='left':
            self.block_x[0] -= SIZE
        if self.direction=='right':
            self.block_x[0] += SIZE
        
        self.draw()
    
    # Snake Movement functions
    def move_left(self):
        self.direction = 'left'
        
    def move_right(self):
        self.direction = 'right'

    def move_up(self):
        self.direction = 'up'   
    
    def move_down(self):
        self.direction = 'down'

    # function for drawing the snake
    def draw(self): 
        for i in range(self.length):
                self.surface.blit(self.block,(self.block_x[i],self.block_y[i]))
        pygame.display.flip()

    def inc_length(self):
        self.length+=1
        self.block_x.append(-1)
        self.block_y.append(-1)
         

class Game:
    def __init__(self):
        self.sp=0.30
        pygame.display.set_caption("Snake Game")
        pygame.init()
        # initializing game window
        self.surface = pygame.display.set_mode((1000,800)) 
        # sound initiation
        pygame.mixer.init()
        self.background_music() 
        self.snake= Snake(self.surface,1)
        self.snake.draw()   
        self.apple= Apple(self.surface)
        self.apple.draw1()

    # background image
    def back_ground_image(self):
        pg = pygame.image.load("C:\\Users\\91983\\Desktop\\g_resource\\sn_bg1.jpg")
        self.surface.blit(pg,(0,0))

    # function for Game background music
    def background_music(self):
        pygame.mixer.music.load("C:\\Users\\91983\\Desktop\\g_resource\\Snakesound.mp3")
        pygame.mixer.music.play(-1,0)

    # function for Sound when snake eats apple or bites itself
    def sound_play(self,soundnm):
        if soundnm=="ding":
            play1 = pygame.mixer.Sound("C:\\Users\\91983\\Desktop\\g_resource\\computer-fail-sound-effect.mp3")
        if soundnm =="crash":
            play1 = pygame.mixer.Sound("C:\\Users\\91983\\Desktop\\g_resource\\losing-sound-effect.mp3")
        pygame.mixer.Sound.play(play1)

    # function for restarting the game after the game is over
    def reset(self):
        self.snake = Snake(self.surface,1)
        self.apple = Apple(self.surface)
    
    # Function for apple Collision
    def collision(self,x1,y1,x2,y2):
        if x1>=x2 and x1 <x2+SIZE:
            if y1>=y2 and y1< y2+SIZE:
                return True   
        return False

    # Function for Boundry Collision
    def side_collision(self,x,y):
        if (x>1000 or x<0) or (y>800 or y<0):
            return True
        return False
    
    # def speed(self,length):
    #     if length%2==0:
    #         return True
    #     return False
        

    # Generic Function
    def  exec(self):
        self.back_ground_image()
        self.snake.move()
        self.apple.draw1()
        self.score()   
        pygame.display.flip()
        
        # Condtion for snake eating apple
        if self.collision(self.snake.block_x[0],self.snake.block_y[0],self.apple.block_x,self.apple.block_y):
            self.sound_play("ding")
            self.snake.inc_length()  # increase length function 
            self.apple.move1()       # apple position change function called

        # Condtion for snake by biteing itself
        for it in range(2,self.snake.length):
            if self.collision(self.snake.block_x[0],self.snake.block_y[0],self.snake.block_x[it],self.snake.block_y[it]):
                self.sound_play("crash")
                raise "Gameover"
        
        # condiotn for boundry collision
        if self.side_collision(self.snake.block_x[0],self.snake.block_y[0]):
            self.sound_play("crash")
            raise "Gameover"
        
        # if self.speed(self.snake.length):
        #     self.sp=self.sp-0.05

    # Score Display Function while game is playing
    def score(self):
        font = pygame.font.SysFont('arial',30)
        scor = font.render(f"Score : {self.snake.length}",True,(255,255,255))
        self.surface.blit(scor,(850,15))

    # function for displaying score after the game is over
    def game_over(self):  
        self.back_ground_image()
        fnt = pygame.font.SysFont('arial',30)
        line = fnt.render(f"Game Over ! Your Score is {self.snake.length}",True,(255,255,255))
        self.surface.blit(line,(200,300))
        line1 = fnt.render(f"Press (enter) to play again and press (Escape) to exit ",True,(255,255,255))
        self.surface.blit(line1,(200,350)) 
        pygame.display.flip() 
        pygame.mixer.music.pause() 


    # generating the events 
    def run(self):
        running=True
        pause = False
        while running:
            for self.event in pygame.event.get():
                if self.event.type == KEYDOWN:
                    if self.event.key == K_ESCAPE:          # EXITING THE GAME
                        running = False
                    if self.event.key == K_RETURN:          # PLAYIING AGAIN
                        pygame.mixer.music.unpause()
                        pause = False
                    if not pause:
                        if self.event.key == K_UP:          # UP KEY
                            self.snake.move_up()
                        if self.event.key == K_DOWN:        # DOWN KEY
                            self.snake.move_down()
                        if self.event.key == K_RIGHT:       # RIGHT KEY
                            self.snake.move_right()
                        if self.event.key== K_LEFT:         # LEFT KEY
                            self.snake.move_left()
                    elif self.event.type == QUIT:
                        running = False

            try:
                if not pause:
                    self.exec()
            except Exception as e:
                self.game_over()
                pause = True
                self.reset()

            time.sleep(self.sp)

# MAIN FUNCTION
if __name__=="__main__":
    game = Game()
    game.run()
                            