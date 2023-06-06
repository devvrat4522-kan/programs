import pygame
from pygame.locals import *


class Snake:
    def __init__(self,surface):
        self.surface=surface
        self.block = pygame.image.load("C:\\Users\\91983\\Desktop\\kl.png").convert()
        self.block_x=100
        self.block_y=100
    
    # function for drawing the snake
    def draw(self):
        self.surface.fill((9, 173, 31)) 
        self.surface.blit(self.block,(self.block_x,self.block_y))
        pygame.display.flip()
    
    # Snake Movement functions
    def move_left(self):
        self.block_x -= 10
        self.draw()

    def move_right(self):
        self.block_x += 10
        self.draw()

    def move_up(self):
        self.block_y -= 10
        self.draw()
    
    def move_down(self):
        self.block_y += 10
        self.draw()

class Game:
    def __init__(self):
        pygame.init()
        # initializing game window
        self.surface = pygame.display.set_mode((1000,500))
        # window Background color
        self.surface.fill((9, 173, 31)) 
        # snake Object  
        self.snake= Snake(self.surface) 
        self.snake.draw()                  
    
    # generating the events 
    def run(self):
        running=True
        while running:
            for self.event in pygame.event.get():
                if self.event.type == KEYDOWN:
                    if self.event.key == K_ESCAPE:
                        running = False
                    if self.event.key == K_UP:
                        self.snake.move_up()
                    if self.event.key == K_DOWN:
                        self.snake.move_down()
                    if self.event.key == K_RIGHT:
                        self.snake.move_right()
                    if self.event.key== K_LEFT:
                        self.snake.move_left()
                    if self.event.type == QUIT:
                        running = False

    

if __name__=="__main__":
    game = Game()
    game.run()
                            