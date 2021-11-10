import cv2

def face_detection(image):
    face_detecter = cv2.CascadeClassifier(r'C:\\Users\\90374\\Code\\reimagined-tribble\\python\\opencv\\data\\haarcascades\\haarcascade_frontalface_default.xml')
    faces = face_detecter.detectMultiScale(image=image,scaleFactor=1.1,minNeighbors=5)
    print('Faces detected are shown below:\n',faces)
    for x,y,w,h in faces:
        cv2.rectangle(img=image, pt1=(x, y), pt2=(x+w, y+h), color=(0, 255, 0), thickness=2)
    cv2.namedWindow('result',0);    
    cv2.imshow('result', image) 
src = cv2.imread('C:\\Users\\90374\\Code\\reimagined-tribble\\python\\a.JPG',cv2.IMREAD_UNCHANGED)
cv2.namedWindow('input image',0);
cv2.imshow('input image', src)
face_detection(src)
cv2.waitKey(0)
cv2.destroyAllWindows()       