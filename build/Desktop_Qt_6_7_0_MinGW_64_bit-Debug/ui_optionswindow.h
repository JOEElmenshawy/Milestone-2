/********************************************************************************
** Form generated from reading UI file 'optionswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWINDOW_H
#define UI_OPTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_OptionsWindow
{
public:
    QLabel *ImageLabel;
    QPushButton *ReturnButton;
    QGroupBox *groupBox;
    QRadioButton *Map3_Radio;
    QRadioButton *MAP1_Radio;
    QRadioButton *Map2_Radio;
    QLabel *Map1;
    QLabel *Map2;
    QLabel *Map3;
    QGroupBox *groupBox_2;
    QRadioButton *SnowRadio;
    QRadioButton *desertRadio;
    QRadioButton *GrassRadio;
    QSlider *VolumeSlider;
    QLabel *VolumeLabel;
    QPushButton *applyButton;

    void setupUi(QDialog *OptionsWindow)
    {
        if (OptionsWindow->objectName().isEmpty())
            OptionsWindow->setObjectName("OptionsWindow");
        OptionsWindow->resize(1125, 750);
        ImageLabel = new QLabel(OptionsWindow);
        ImageLabel->setObjectName("ImageLabel");
        ImageLabel->setGeometry(QRect(0, 0, 1125, 750));
        ReturnButton = new QPushButton(OptionsWindow);
        ReturnButton->setObjectName("ReturnButton");
        ReturnButton->setGeometry(QRect(450, 660, 201, 41));
        QPalette palette;
        QBrush brush(QColor(0, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        ReturnButton->setPalette(palette);
        ReturnButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        groupBox = new QGroupBox(OptionsWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 30, 991, 341));
        Map3_Radio = new QRadioButton(groupBox);
        Map3_Radio->setObjectName("Map3_Radio");
        Map3_Radio->setGeometry(QRect(740, 40, 110, 24));
        MAP1_Radio = new QRadioButton(groupBox);
        MAP1_Radio->setObjectName("MAP1_Radio");
        MAP1_Radio->setGeometry(QRect(70, 40, 110, 24));
        Map2_Radio = new QRadioButton(groupBox);
        Map2_Radio->setObjectName("Map2_Radio");
        Map2_Radio->setGeometry(QRect(390, 40, 110, 24));
        Map1 = new QLabel(groupBox);
        Map1->setObjectName("Map1");
        Map1->setGeometry(QRect(60, 100, 150, 100));
        Map2 = new QLabel(groupBox);
        Map2->setObjectName("Map2");
        Map2->setGeometry(QRect(390, 100, 150, 100));
        Map3 = new QLabel(groupBox);
        Map3->setObjectName("Map3");
        Map3->setGeometry(QRect(720, 100, 150, 100));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 240, 991, 80));
        SnowRadio = new QRadioButton(groupBox_2);
        SnowRadio->setObjectName("SnowRadio");
        SnowRadio->setGeometry(QRect(20, 30, 110, 24));
        desertRadio = new QRadioButton(groupBox_2);
        desertRadio->setObjectName("desertRadio");
        desertRadio->setGeometry(QRect(390, 30, 110, 24));
        GrassRadio = new QRadioButton(groupBox_2);
        GrassRadio->setObjectName("GrassRadio");
        GrassRadio->setGeometry(QRect(750, 30, 110, 24));
        VolumeSlider = new QSlider(OptionsWindow);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setGeometry(QRect(200, 450, 461, 22));
        VolumeSlider->setOrientation(Qt::Horizontal);
        VolumeLabel = new QLabel(OptionsWindow);
        VolumeLabel->setObjectName("VolumeLabel");
        VolumeLabel->setGeometry(QRect(70, 450, 81, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        VolumeLabel->setFont(font);
        applyButton = new QPushButton(OptionsWindow);
        applyButton->setObjectName("applyButton");
        applyButton->setGeometry(QRect(270, 660, 141, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        applyButton->setPalette(palette1);
        applyButton->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));

        retranslateUi(OptionsWindow);

        QMetaObject::connectSlotsByName(OptionsWindow);
    } // setupUi

    void retranslateUi(QDialog *OptionsWindow)
    {
        OptionsWindow->setWindowTitle(QCoreApplication::translate("OptionsWindow", "Dialog", nullptr));
        ImageLabel->setText(QCoreApplication::translate("OptionsWindow", "TextLabel", nullptr));
        ReturnButton->setText(QCoreApplication::translate("OptionsWindow", "Return to Main Menue", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionsWindow", "Map Selection", nullptr));
        Map3_Radio->setText(QCoreApplication::translate("OptionsWindow", "Map3", nullptr));
        MAP1_Radio->setText(QCoreApplication::translate("OptionsWindow", "Map1", nullptr));
        Map2_Radio->setText(QCoreApplication::translate("OptionsWindow", "Map2", nullptr));
        Map1->setText(QCoreApplication::translate("OptionsWindow", "TextLabel", nullptr));
        Map2->setText(QCoreApplication::translate("OptionsWindow", "TextLabel", nullptr));
        Map3->setText(QCoreApplication::translate("OptionsWindow", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OptionsWindow", "Biome Selection", nullptr));
        SnowRadio->setText(QCoreApplication::translate("OptionsWindow", "Snowy", nullptr));
        desertRadio->setText(QCoreApplication::translate("OptionsWindow", "Desert", nullptr));
        GrassRadio->setText(QCoreApplication::translate("OptionsWindow", "Grass", nullptr));
        VolumeLabel->setText(QCoreApplication::translate("OptionsWindow", "Volume", nullptr));
        applyButton->setText(QCoreApplication::translate("OptionsWindow", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsWindow: public Ui_OptionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWINDOW_H
