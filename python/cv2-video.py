import cv2

cap = cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
face_detect = cv2.CascadeClassifier(r'C:\\Users\\90374\\Code\\reimagined-tribble\\python\\opencv\\data\\haarcascades\\haarcascade_frontalface_default.xml')

while True:
    ret, frame = cap.read()
    if not ret:
        break
    frame = cv2.resize(frame, None, fx=0.5, fy=0.5)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    face_zone = face_detect.detectMultiScale(gray, scaleFactor=1.2, minNeighbors=8)
    for x, y, w, h in face_zone:
        cv2.rectangle(frame, pt1=(x, y), pt2=(x + w, y + h), color=[0, 0, 255], thickness=2)
        cv2.circle(frame, center=(x + w // 2, y + h // 2), radius=w // 2, color=[0, 255, 0], thickness=2)
    cv2.namedWindow('video',cv2.WINDOW_GUI_NORMAL)
    cv2.imshow('video', frame)
    if ord('q') == cv2.waitKey(10):
        break

cv2.destroyAllWindows()
cap.release()