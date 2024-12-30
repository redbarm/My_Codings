import cv2 as cv
import numpy as np
 
cap = cv.VideoCapture(0)
yellow = np.uint8([[[120,150,90 ]]])
hsv_yellow = cv.cvtColor(yellow,cv.COLOR_BGR2HSV)
print( hsv_yellow )

 
while(1):
 
    # Take each frame
    _, frame = cap.read()
 
    # Convert BGR to HSV
    hsv = cv.cvtColor(frame, cv.COLOR_BGR2HSV)
    cv.imshow('hsv',hsv)
 
    # define range of blue color in HSV
    lower_blue = np.array([100,170,120])#110,50,50
    upper_blue = np.array([110,225,225])#130,255,255

    #lower_yellow = np.array([20,100,100])#100 130 190
    #upper_yellow = np.array([39,255,255])#105 135 195
 
    # Threshold the HSV image to get only blue colors
    mask = cv.inRange(hsv, lower_blue, upper_blue)
 
    # Bitwise-AND mask and original image
    res = cv.bitwise_and(frame,frame, mask= mask)
    edges=cv.Canny(res,180,200)
    contours, hierarchy = cv.findContours(edges, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE)
    # Calculate the CG for each contour
    cnt = contours[0]
    M=cv.moments(cnt)
    for contour in contours:
        # Calculate moments
        M = cv.moments(contour)

    # Calculate CG coordinates
    if M['m00'] != 0:
        cx = int(M['m10'] / M['m00'])
        cy = int(M['m01'] / M['m00'])

        # Draw a circle at the CG
        cv.circle(res, (cx, cy), 10, (0, 0, 255), -1)

    cv.imshow('frame',frame)
    cv.imshow('mask',mask)
    cv.imshow('res',res)
    cv.imshow('edges',edges)

    k = cv.waitKey(5) & 0xFF
    if k == 27:
        break
 
cv.destroyAllWindows()