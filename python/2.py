import sys
from PyQt5 import QtWidgets
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtWidgets import QApplication, QMessageBox
from PyQt5.QtCore import QTimer
from untitled import Ui_MainWindow
import cv2
import os
cap = cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT,1080)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
face_detect = cv2.CascadeClassifier(
    r'C:\\Users\\90374\\Code\\reimagined-tribble\\python\\opencv\\data\\haarcascades\\haarcascade_frontalface_default.xml')
path = 'E:\\FaceDataCollect'


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent=parent)
        self.setupUi(self)
        self.timer_camera = QTimer()
        self.timer_test = QTimer()
        self.monitor.clicked.connect(self.startMonitoring_Clicked)
        self.terminate.clicked.connect(self.exit0)
        self.facedatacollect.clicked.connect(self.facedatacollect_Clicked)
        self.timer_camera.timeout.connect(self.startMonitoring_Clicked)
        self.facedatatraing.clicked.connect(self.train)


    def facedatacollect_Clicked(self):
        face_id = input('\n 输入序号:')
        count=0
        ret, frame = cap.read()
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

    def train(self):
        exit()

    def startMonitoring_Clicked(self):
        self.timer_camera.start(100)
        recognizer = cv2.face.LBPHFaceRecognizer_create()
        recognizer.read('E:\\FaceDataCollect\\trainer.yml')
        cascadePath = "C:\\Users\\90374\\Code\\reimagined-tribble\\face_recognition_py\\haarcascades\\haarcascade_frontalface_default.xml"
        faceCascade = cv2.CascadeClassifier(cascadePath)
        font = cv2.FONT_HERSHEY_SIMPLEX
        idnum = 0
        names = ['D', 'W', 'X', 'H']
        minW = 0.1*cap.get(3)
        minH = 0.1*cap.get(4)
        ret, img = cap.read()
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        faces = faceCascade.detectMultiScale(
            gray,
            scaleFactor=1.2,
            minNeighbors=5,
            minSize=(int(minW), int(minH))
        )

        for (x, y, w, h) in faces:
            idnum, confidence = recognizer.predict(gray[y:y+h, x:x+w])

            if confidence < 100:
                idnum = names[idnum]
                cv2.rectangle(img, (x, y), (x+w, y+h), (0, 255, 0), 2)
                confidence = "{0}%".format(round(100 - confidence))
            else:
                idnum = "unknown"
                cv2.rectangle(img, (x, y), (x+w, y+h), (0, 0, 255), 2)
                confidence = "{0}%".format(round(100 - confidence))
            cv2.putText(img, str(idnum), (x+5, y-5), font, 1, (0, 0, 255), 1)

        img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        self.Qframe = QImage(
            img.data, img.shape[1], img.shape[0], QImage.Format_RGB888)
        self.DisplayLabel.setPixmap(QPixmap.fromImage(self.Qframe))
        self.DisplayLabel.setScaledContents(True)

    def exit0(self):
        exit()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    w = MainWindow()
    w.show()
    sys.exit(app.exec_())
