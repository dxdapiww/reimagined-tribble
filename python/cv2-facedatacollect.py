import cv2
cap = cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 2160)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 3840)
face_detect = cv2.CascadeClassifier(
    r'C:\\Users\\90374\\Code\\reimagined-tribble\\python\\opencv\\data\\haarcascades\\haarcascade_frontalface_default.xml')
face_id = input('\n 输入序号:')
print('\n面部信息采集中，请面对摄像头')
count = 0
while True:
    ret, frame = cap.read()
    if not ret:
        break
    frame = cv2.resize(frame, None, fx=0.5, fy=0.5)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    face_zone = face_detect.detectMultiScale(
        gray, scaleFactor=1.2, minNeighbors=5)
    for x, y, w, h in face_zone:
        cv2.rectangle(frame, pt1=(x, y), pt2=(x + w, y + h),
                      color=[0, 0, 255], thickness=2)
        count += 1
        cv2.imwrite("E:\\FaceDataCollect\\User."+str(face_id) +
                    '.'+str(count)+'.jpg', gray[y:y+h, x:x+w])
        cv2.imshow('image', frame)
    #cv2.namedWindow('video', cv2.WINDOW_GUI_NORMAL)
    if cv2.waitKey(1) == 27:
        break
    elif count >= 1500:
        break

cv2.destroyAllWindows()
cap.release()
