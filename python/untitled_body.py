import sys
from threading import Thread
from PyQt5 import QtWidgets
from PyQt5.QtGui import QImage, QPixmap
from PyQt5.QtWidgets import QApplication, QMessageBox, QInputDialog
from PyQt5.QtCore import QTimer
from untitled import Ui_MainWindow
import cv2
import face_recognition
import numpy as np


class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent=parent)
        self.setupUi(self)
        self.monitor.clicked.connect(self.startMonitoring_Clicked)
        self.terminate.clicked.connect(self.exit0)
        self.facedatacollect.clicked.connect(self.facedatacollect_Clicked)
        self.timer_camera = QTimer()
        self.timer_camera.timeout.connect(self.startMonitoring_Clicked)

    def facedatacollect_Clicked(self):
        QMessageBox.about(self, "提示", "仅拍摄一张照片")
        name, ok = QInputDialog.getText(self, '提示', '输入姓名')
        path_name = "C:\\Users\\90374\\Code\\reimagined-tribble\\python"
        window_name = "get face"
        cv2.namedWindow(window_name)

        cap = cv2.VideoCapture(0)

        classfier = cv2.CascadeClassifier(
            "C:\\Users\\90374\\Code\\reimagined-tribble\\face_recognition_py\\haarcascades\\haarcascade_frontalface_alt.xml")

        color = (0, 255, 0)
        num=0
        while cap.isOpened():
            ok, frame = cap.read()
            if not ok:
                break

            grey = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

            faceRects = classfier.detectMultiScale(
                grey, scaleFactor=1.2, minNeighbors=3, minSize=(32, 32))
            if len(faceRects) > 0:
                for faceRect in faceRects:
                    x, y, w, h = faceRect

                    img_name = "%s/%s.jpg" % (path_name, name)
                    image = frame[y - 10: y + h + 10, x - 10: x + w + 10]
                    cv2.imwrite(img_name, image, [
                                int(cv2.IMWRITE_PNG_COMPRESSION), 9])

                    num += 1
                    if num > 1:
                        break

                    cv2.rectangle(frame, (x - 10, y - 10),
                                  (x + w + 10, y + h + 10), color, 2)

            if num > 1:
                break

            cv2.imshow(window_name, frame)
            c = cv2.waitKey(10)
            if c & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()

    def startMonitoring_Clicked(self):
        cap = cv2.VideoCapture(0)
        self.timer_camera.start(10)
        jokertin_image = face_recognition.load_image_file(
            "C:/Users/90374/Code/reimagined-tribble/python/jokertin.png")
        jokertin_face_encoding = face_recognition.face_encodings(jokertin_image)[0]

        biden_image = face_recognition.load_image_file(
            "C:/Users/90374/Code/reimagined-tribble/python/biden.jpg")
        biden_face_encoding = face_recognition.face_encodings(biden_image)[0]

        known_face_encodings = [
            jokertin_face_encoding,
            biden_face_encoding
        ]
        known_face_names = [
            "Donald Trump",
            "Joe Biden"
        ]
        ret, frame = cap.read()
        rgb_frame = frame[:, :, ::-1]

        face_locations = face_recognition.face_locations(
            rgb_frame, model="cnn")
        face_encodings = face_recognition.face_encodings(
            rgb_frame, face_locations)

        for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
            matches = face_recognition.compare_faces(
                known_face_encodings, face_encoding)

            name = "Unknown"

            face_distances = face_recognition.face_distance(
                known_face_encodings, face_encoding)
            best_match_index = np.argmin(face_distances)
            if matches[best_match_index]:
                name = known_face_names[best_match_index]

            cv2.rectangle(frame, (left, top), (right, bottom), (0, 255, 0), 2)

            cv2.rectangle(frame, (left, bottom - 35),
                          (right, bottom), (0, 0, 255), cv2.FILLED)
            font = cv2.FONT_HERSHEY_TRIPLEX
            cv2.putText(frame, name, (left + 6, bottom - 6),
                        font, 1.0, (255, 255, 255), 1)

        img = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        img = QImage(img.data, img.shape[1],
                     img.shape[0], QImage.Format_RGB888)
        self.DisplayLabel.setPixmap(QPixmap.fromImage(img))
        self.DisplayLabel.setScaledContents(True)

    def exit0(self):
        exit()
    
  


if __name__ == '__main__':
    app = QApplication(sys.argv)
    w = MainWindow()
    w.show()
    sys.exit(app.exec_())
