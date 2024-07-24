# Write a Program to read a digital image. Split and display image into 4 quadrants, up, down, right and left.

import cv2
import numpy as np
import matplotlib.pyplot as plt

# Read the image
img = cv2.imread("./images/rnsit.jpeg")

# Get the height and width of the image
height, width = img.shape[:2]

# Split the image into four quadrants
quad1 = img[:height//2, :width//2]  # Top-left quadrant
quad2 = img[:height//2, width//2:]  # Top-right quadrant
quad3 = img[height//2:, :width//2]  # Bottom-left quadrant
quad4 = img[height//2:, width//2:]  # Bottom-right quadrant

# Display the quadrants using matplotlib
plt.figure(figsize=(10, 5))

# Display the first two quadrants
plt.subplot(1, 2, 1)
plt.imshow(cv2.cvtColor(quad1, cv2.COLOR_BGR2RGB))
plt.title("1")
plt.axis("off")

plt.subplot(1, 2, 2)
plt.imshow(cv2.cvtColor(quad2, cv2.COLOR_BGR2RGB))
plt.title("2")
plt.axis("off")

plt.figure(figsize=(10, 5))

# Display the last two quadrants
plt.subplot(1, 2, 1)
plt.imshow(cv2.cvtColor(quad3, cv2.COLOR_BGR2RGB))
plt.title("3")
plt.axis("off")

plt.subplot(1, 2, 2)
plt.imshow(cv2.cvtColor(quad4, cv2.COLOR_BGR2RGB))
plt.title("4")
plt.axis("off")

plt.show()
