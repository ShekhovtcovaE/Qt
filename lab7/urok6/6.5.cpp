#include <QApplication>
#include <QWidget>
#include <QPushButton>
 
class MyButton : public QWidget {
    
 public:
     MyButton(QWidget *parent = 0);
};
 
MyButton::MyButton(QWidget *parent)
    : QWidget(parent) {
 
  QPushButton *quitBtn = new QPushButton("Quit", this); // создаем новую кнопку
  quitBtn->setGeometry(50, 40, 75, 30); // изменяем размеры кнопки в пикселях и помещаем на форму окна 
 
  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}
 
int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);  
    
  MyButton window;
 
  window.resize(250, 150);  
  window.setWindowTitle("QPushButton");
  window.show();
 
  return app.exec();
}
