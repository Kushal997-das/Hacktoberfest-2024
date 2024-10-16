import turtle

# Set up the window
win = turtle.Screen()
win.title("Ping Pong Game")
win.bgcolor("black")
win.setup(width=800, height=600)
win.tracer(0)  # Stops the window from updating automatically

# Paddle A (Left)
paddle_a = turtle.Turtle()
paddle_a.speed(0)  # Speed of animation
paddle_a.shape("square")
paddle_a.color("white")
paddle_a.shapesize(stretch_wid=6, stretch_len=1)  # Paddle size
paddle_a.penup()  # Stops drawing when moving
paddle_a.goto(-350, 0)

# Paddle B (Right)
paddle_b = turtle.Turtle()
paddle_b.speed(0)
paddle_b.shape("square")
paddle_b.color("white")
paddle_b.shapesize(stretch_wid=6, stretch_len=1)
paddle_b.penup()
paddle_b.goto(350, 0)

# Ball
ball = turtle.Turtle()
ball.speed(100)
ball.shape("square")
ball.color("white")
ball.penup()
ball.goto(0, 0)
ball.dx = 0.15  # Change in x-axis
ball.dy = -0.15  # Change in y-axis

# Score
score_a = 0
score_b = 0

# Score display
pen = turtle.Turtle()
pen.speed(0)
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write("Player A: 0  Player B: 0", align="center", font=("Courier", 24, "normal"))

# Functions to move paddles
def paddle_a_up():
    y = paddle_a.ycor()
    if y < 250:  # Limit paddle movement within the window
        y += 20
    paddle_a.sety(y)

def paddle_a_down():
    y = paddle_a.ycor()
    if y > -240:
        y -= 20
    paddle_a.sety(y)

def paddle_b_up():
    y = paddle_b.ycor()
    if y < 250:
        y += 20
    paddle_b.sety(y)

def paddle_b_down():
    y = paddle_b.ycor()
    if y > -240:
        y -= 20
    paddle_b.sety(y)

# Keyboard bindings
win.listen()
win.onkeypress(paddle_a_up, "w")
win.onkeypress(paddle_a_down, "s")
win.onkeypress(paddle_b_up, "Up")
win.onkeypress(paddle_b_down, "Down")

# Main game loop
while True:
    win.update()  # Update the screen

    # Move the ball
    ball.setx(ball.xcor() + ball.dx)
    ball.sety(ball.ycor() + ball.dy)

    # Border checking
    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy *= -1  # Reverse direction

    if ball.ycor() < -290:
        ball.sety(-290)
        ball.dy *= -1

    if ball.xcor() > 390:
        ball.goto(0, 0)
        ball.dx *= -1
        score_a += 1
        pen.clear()
        pen.write(f"Player A: {score_a}  Player B: {score_b}", align="center", font=("Courier", 24, "normal"))

    if ball.xcor() < -390:
        ball.goto(0, 0)
        ball.dx *= -1
        score_b += 1
        pen.clear()
        pen.write(f"Player A: {score_a}  Player B: {score_b}", align="center", font=("Courier", 24, "normal"))

    # Paddle and ball collisions
    if (ball.dx > 0 and ball.xcor() > 340 and ball.xcor() < 350 and
            ball.ycor() < paddle_b.ycor() + 50 and ball.ycor() > paddle_b.ycor() - 50):
        ball.setx(340)
        ball.dx *= -1

    if (ball.dx < 0 and ball.xcor() < -340 and ball.xcor() > -350 and
            ball.ycor() < paddle_a.ycor() + 50 and ball.ycor() > paddle_a.ycor() - 50):
        ball.setx(-340)
        ball.dx *= -1
