import curses
import random
import time

# Initialize the screen and get the dimensions
screen = cursed.Terminal()
screen_width, screen_height = screen.get_size()

# Initialize the player position
player_x = screen_width // 2
player_y = screen_height // 2

# Initialize the enemy position
enemy_x = random.randint(0, screen_width - 1)
enemy_y = random.randint(0, screen_height - 1)

# Game loop
while True:
    # Clear the screen
    screen.clear()
    
    # Draw the player
    screen.move(player_y, player_x)
    screen.addstr("P")
    
    # Draw the enemy
    screen.move(enemy_y, enemy_x)
    screen.addstr("E")
    
    # Check for user input
    key = screen.get_input()
    if key == "q":
        break
    elif key == "w":
        player_y -= 1
    elif key == "a":
        player_x -= 1
    elif key == "s":
        player_y += 1
    elif key == "d":
        player_x += 1
    
    # Check for enemy collision
    if player_x == enemy_x and player_y == enemy_y:
        screen.addstr(f"You lose! The enemy was at position ({enemy_x}, {enemy_y})")
        break
    
    # Update the screen
    screen.refresh()
    
    # Sleep for a short time to slow down the game
    time.sleep(0.1)
