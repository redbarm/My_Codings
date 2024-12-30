import cv2

# Create a VideoCapture object
cap = cv2.VideoCapture(0)  # 0 for default camera, or provide video file path

# Check if camera opened successfully
if not cap.isOpened():
    print("Error opening video stream or file")

while cap.isOpened():
    # Read a frame from the video
    ret, frame = cap.read()

    if ret:
        # Display the resulting frame
        cv2.imshow('Frame', frame)

        # Press 'q' to exit
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break

# Release the video capture object and close all windows
cap.release()
cv2.destroyAllWindows()
