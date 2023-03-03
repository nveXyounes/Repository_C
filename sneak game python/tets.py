import pygame
import time

# Define constants for the game window and snake size
WINDOW_WIDTH = 640
WINDOW_HEIGHT = 480
SNAKE_SIZE = 20

# Define constants for colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)

# Initialize Pygame
pygame.init()

# Create the game window
window = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
pygame.display.set_caption('Snake')

# Define the Snake class
class Snake:
    def __init__(self, x, y):
        self.body = [(x, y)]
        self.last_move_time = time.time()
        self.direction = 'right'

    def move(self):
        # Move the snake in its current direction
        x, y = self.body[0]
        if self.direction == 'right':
            x += SNAKE_SIZE
        elif self.direction == 'left':
            x -= SNAKE_SIZE
        elif self.direction == 'up':
            y -= SNAKE_SIZE
        elif self.direction == 'down':
            y += SNAKE_SIZE
        self.body.insert(0, (x, y))

        # Remove the last body segment if the snake hasn't eaten recently
        if time.time() - self.last_move_time > 1:
            self.body.pop()
        else:
            self.last_move_time = time.time()

    def change_direction(self, direction):
        # Change the snake's direction if it's not moving in the opposite direction
        if direction == 'right' and self.direction != 'left':
            self.direction = 'right'
        elif direction == 'left' and self.direction != 'right':
            self.direction = 'left'
        elif direction == 'up' and self.direction != 'down':
            self.direction = 'up'
        elif direction == 'down' and self.direction != 'up':
            self.direction = 'down'

    def draw(self):
        # Draw each body segment of the snake
        for x, y in self.body:
            pygame.draw.rect(window, GREEN, (x, y, SNAKE_SIZE, SNAKE_SIZE))

# Create the Snake object
snake = Snake(WINDOW_WIDTH // 2, WINDOW_HEIGHT // 2)

# Start the game loop
while True:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                snake.change_direction('right')
            elif event.key == pygame.K_LEFT:
                snake.change_direction('left')
            elif event.key == pygame.K_UP:
                snake.change_direction('up')
            elif event.key == pygame.K_DOWN:
                snake.change_direction('down')

    # Move the snake and draw it
    snake.move()
    window.fill(BLACK)
    snake.draw()
    pygame.display.update()
    pygame.time.Clock().tick(10)
