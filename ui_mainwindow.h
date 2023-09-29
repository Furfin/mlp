/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

#include "view/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
  QWidget *centralwidget;
  QTabWidget *tabWidget;
  QWidget *learning;
  QLabel *label_realization;
  QWidget *layoutWidget;
  QHBoxLayout *mode_box;
  QRadioButton *matrix_mode;
  QRadioButton *graph_mode;
  QTextBrowser *text_browser;
  QLabel *label_layers;
  QPushButton *button_save_weights;
  QPushButton *button_load_weights;
  QLabel *label_epochs;
  QCheckBox *check_build_graph;
  QCheckBox *check_cross_validation;
  QPushButton *button_learning;
  QSpinBox *spin_count_epochs;
  QSpinBox *spin_count_layers;
  QLabel *label_k;
  QSpinBox *spin_k_groups;
  QCustomPlot *graph;
  QCheckBox *check_default_weights;
  QPushButton *button_load_file_for_learning;
  QLabel *label_gif;
  QWidget *testing;
  QWidget *layoutWidget_2;
  QHBoxLayout *perceptron_implementation_box_test;
  QRadioButton *perceptron_matrix_mode_test;
  QRadioButton *perceptron_graph_mode_test;
  QLabel *label_realization_test;
  QCheckBox *check_now_realization;
  QPushButton *button_load_weights_test;
  QPushButton *button_load_file_test;
  QPushButton *button_run_test;
  QLabel *label_part_of_test;
  QDoubleSpinBox *doubleSpinBox;
  QGroupBox *group_result;
  QLabel *label_average_mse;
  QLabel *label_average_accuracy;
  QLabel *label_precision;
  QLabel *label_recall;
  QLabel *label_f_mesaure;
  QLabel *label_spent_time;
  QLineEdit *lineEdit_average_accuracy;
  QLineEdit *lineEdit_average_mse;
  QLineEdit *lineEdit_precision;
  QLineEdit *lineEdit_recall;
  QLineEdit *lineEdit_f_mesaure;
  QLineEdit *lineEdit_spent_time;
  QWidget *handTesting;
  QGraphicsView *graphicsView;
  QPushButton *button_process;
  QPushButton *button_load_image;
  QLabel *label_result;
  QLabel *label_answer;
  QPushButton *button_clear;
  QLabel *label;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(661, 437);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    MainWindow->setMinimumSize(QSize(661, 437));
    MainWindow->setMaximumSize(QSize(661, 437));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    tabWidget = new QTabWidget(centralwidget);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setEnabled(true);
    tabWidget->setGeometry(QRect(0, 0, 661, 435));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
    tabWidget->setSizePolicy(sizePolicy1);
    learning = new QWidget();
    learning->setObjectName(QString::fromUtf8("learning"));
    label_realization = new QLabel(learning);
    label_realization->setObjectName(QString::fromUtf8("label_realization"));
    label_realization->setGeometry(QRect(20, 20, 211, 16));
    QFont font;
    font.setPointSize(12);
    font.setBold(false);
    font.setWeight(50);
    label_realization->setFont(font);
    label_realization->setTextFormat(Qt::AutoText);
    layoutWidget = new QWidget(learning);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(20, 40, 230, 32));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Geneva"));
    layoutWidget->setFont(font1);
    mode_box = new QHBoxLayout(layoutWidget);
    mode_box->setSpacing(0);
    mode_box->setObjectName(QString::fromUtf8("mode_box"));
    mode_box->setContentsMargins(0, 0, 0, 0);
    matrix_mode = new QRadioButton(layoutWidget);
    matrix_mode->setObjectName(QString::fromUtf8("matrix_mode"));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Geneva"));
    font2.setPointSize(14);
    matrix_mode->setFont(font2);
    matrix_mode->setCursor(QCursor(Qt::PointingHandCursor));
    matrix_mode->setStyleSheet(QString::fromUtf8(""));
    matrix_mode->setChecked(true);

    mode_box->addWidget(matrix_mode);

    graph_mode = new QRadioButton(layoutWidget);
    graph_mode->setObjectName(QString::fromUtf8("graph_mode"));
    graph_mode->setFont(font2);
    graph_mode->setCursor(QCursor(Qt::PointingHandCursor));
    graph_mode->setStyleSheet(QString::fromUtf8(""));

    mode_box->addWidget(graph_mode);

    text_browser = new QTextBrowser(learning);
    text_browser->setObjectName(QString::fromUtf8("text_browser"));
    text_browser->setGeometry(QRect(340, 10, 296, 191));
    text_browser->setFont(font1);
    text_browser->setStyleSheet(
        QString::fromUtf8("QTextBrowser {\n"
                          "	background-color: black;\n"
                          "	color: #ffffff;\n"
                          "}"));
    label_layers = new QLabel(learning);
    label_layers->setObjectName(QString::fromUtf8("label_layers"));
    label_layers->setGeometry(QRect(20, 80, 231, 16));
    label_layers->setFont(font);
    label_layers->setTextFormat(Qt::AutoText);
    button_save_weights = new QPushButton(learning);
    button_save_weights->setObjectName(
        QString::fromUtf8("button_save_weights"));
    button_save_weights->setEnabled(false);
    button_save_weights->setGeometry(QRect(20, 340, 141, 32));
    QFont font3;
    font3.setPointSize(12);
    button_save_weights->setFont(font3);
    button_load_weights = new QPushButton(learning);
    button_load_weights->setObjectName(
        QString::fromUtf8("button_load_weights"));
    button_load_weights->setEnabled(false);
    button_load_weights->setGeometry(QRect(170, 340, 141, 32));
    button_load_weights->setFont(font3);
    label_epochs = new QLabel(learning);
    label_epochs->setObjectName(QString::fromUtf8("label_epochs"));
    label_epochs->setGeometry(QRect(20, 155, 231, 16));
    label_epochs->setFont(font);
    label_epochs->setTextFormat(Qt::AutoText);
    check_build_graph = new QCheckBox(learning);
    check_build_graph->setObjectName(QString::fromUtf8("check_build_graph"));
    check_build_graph->setGeometry(QRect(20, 260, 181, 20));
    check_build_graph->setFont(font);
    check_build_graph->setStyleSheet(QString::fromUtf8(""));
    check_cross_validation = new QCheckBox(learning);
    check_cross_validation->setObjectName(
        QString::fromUtf8("check_cross_validation"));
    check_cross_validation->setGeometry(QRect(20, 180, 181, 20));
    check_cross_validation->setFont(font);
    check_cross_validation->setStyleSheet(QString::fromUtf8(""));
    button_learning = new QPushButton(learning);
    button_learning->setObjectName(QString::fromUtf8("button_learning"));
    button_learning->setEnabled(false);
    button_learning->setGeometry(QRect(20, 370, 291, 32));
    QFont font4;
    font4.setPointSize(14);
    button_learning->setFont(font4);
    spin_count_epochs = new QSpinBox(learning);
    spin_count_epochs->setObjectName(QString::fromUtf8("spin_count_epochs"));
    spin_count_epochs->setGeometry(QRect(260, 150, 51, 22));
    spin_count_epochs->setMinimum(1);
    spin_count_layers = new QSpinBox(learning);
    spin_count_layers->setObjectName(QString::fromUtf8("spin_count_layers"));
    spin_count_layers->setGeometry(QRect(260, 77, 51, 22));
    spin_count_layers->setMinimum(2);
    spin_count_layers->setMaximum(5);
    label_k = new QLabel(learning);
    label_k->setObjectName(QString::fromUtf8("label_k"));
    label_k->setEnabled(false);
    label_k->setGeometry(QRect(20, 208, 231, 16));
    label_k->setFont(font);
    label_k->setTextFormat(Qt::AutoText);
    spin_k_groups = new QSpinBox(learning);
    spin_k_groups->setObjectName(QString::fromUtf8("spin_k_groups"));
    spin_k_groups->setEnabled(false);
    spin_k_groups->setGeometry(QRect(260, 205, 51, 22));
    spin_k_groups->setMinimum(2);
    spin_k_groups->setMaximum(100);
    graph = new QCustomPlot(learning);
    graph->setObjectName(QString::fromUtf8("graph"));
    graph->setGeometry(QRect(340, 210, 296, 191));
    graph->setMinimumSize(QSize(296, 191));
    graph->setMaximumSize(QSize(400, 300));
    graph->setStyleSheet(QString::fromUtf8("QWidget {\n"
                                           "	background-color: white;\n"
                                           "}"));
    check_default_weights = new QCheckBox(learning);
    check_default_weights->setObjectName(
        QString::fromUtf8("check_default_weights"));
    check_default_weights->setGeometry(QRect(20, 316, 261, 20));
    check_default_weights->setFont(font);
    check_default_weights->setStyleSheet(QString::fromUtf8(""));
    check_default_weights->setChecked(true);
    button_load_file_for_learning = new QPushButton(learning);
    button_load_file_for_learning->setObjectName(
        QString::fromUtf8("button_load_file_for_learning"));
    button_load_file_for_learning->setGeometry(QRect(20, 285, 291, 32));
    button_load_file_for_learning->setFont(font4);
    label_gif = new QLabel(learning);
    label_gif->setObjectName(QString::fromUtf8("label_gif"));
    label_gif->setGeometry(QRect(340, 10, 296, 191));
    tabWidget->addTab(learning, QString());
    testing = new QWidget();
    testing->setObjectName(QString::fromUtf8("testing"));
    layoutWidget_2 = new QWidget(testing);
    layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
    layoutWidget_2->setEnabled(true);
    layoutWidget_2->setGeometry(QRect(20, 80, 230, 32));
    layoutWidget_2->setFont(font1);
    perceptron_implementation_box_test = new QHBoxLayout(layoutWidget_2);
    perceptron_implementation_box_test->setSpacing(0);
    perceptron_implementation_box_test->setObjectName(
        QString::fromUtf8("perceptron_implementation_box_test"));
    perceptron_implementation_box_test->setContentsMargins(0, 0, 0, 0);
    perceptron_matrix_mode_test = new QRadioButton(layoutWidget_2);
    perceptron_matrix_mode_test->setObjectName(
        QString::fromUtf8("perceptron_matrix_mode_test"));
    perceptron_matrix_mode_test->setFont(font2);
    perceptron_matrix_mode_test->setCursor(QCursor(Qt::PointingHandCursor));
    perceptron_matrix_mode_test->setStyleSheet(QString::fromUtf8(""));
    perceptron_matrix_mode_test->setChecked(true);

    perceptron_implementation_box_test->addWidget(perceptron_matrix_mode_test);

    perceptron_graph_mode_test = new QRadioButton(layoutWidget_2);
    perceptron_graph_mode_test->setObjectName(
        QString::fromUtf8("perceptron_graph_mode_test"));
    perceptron_graph_mode_test->setFont(font2);
    perceptron_graph_mode_test->setCursor(QCursor(Qt::PointingHandCursor));
    perceptron_graph_mode_test->setStyleSheet(QString::fromUtf8(""));

    perceptron_implementation_box_test->addWidget(perceptron_graph_mode_test);

    label_realization_test = new QLabel(testing);
    label_realization_test->setObjectName(
        QString::fromUtf8("label_realization_test"));
    label_realization_test->setEnabled(true);
    label_realization_test->setGeometry(QRect(20, 63, 211, 16));
    label_realization_test->setFont(font);
    label_realization_test->setTextFormat(Qt::AutoText);
    check_now_realization = new QCheckBox(testing);
    check_now_realization->setObjectName(
        QString::fromUtf8("check_now_realization"));
    check_now_realization->setEnabled(false);
    check_now_realization->setGeometry(QRect(20, 20, 281, 20));
    check_now_realization->setFont(font3);
    check_now_realization->setChecked(false);
    button_load_weights_test = new QPushButton(testing);
    button_load_weights_test->setObjectName(
        QString::fromUtf8("button_load_weights_test"));
    button_load_weights_test->setEnabled(true);
    button_load_weights_test->setGeometry(QRect(20, 120, 291, 32));
    button_load_weights_test->setFont(font4);
    button_load_file_test = new QPushButton(testing);
    button_load_file_test->setObjectName(
        QString::fromUtf8("button_load_file_test"));
    button_load_file_test->setEnabled(false);
    button_load_file_test->setGeometry(QRect(20, 300, 291, 32));
    button_load_file_test->setFont(font4);
    button_run_test = new QPushButton(testing);
    button_run_test->setObjectName(QString::fromUtf8("button_run_test"));
    button_run_test->setEnabled(false);
    button_run_test->setGeometry(QRect(20, 370, 291, 32));
    button_run_test->setFont(font4);
    label_part_of_test = new QLabel(testing);
    label_part_of_test->setObjectName(QString::fromUtf8("label_part_of_test"));
    label_part_of_test->setGeometry(QRect(20, 340, 231, 16));
    label_part_of_test->setFont(font);
    label_part_of_test->setTextFormat(Qt::AutoText);
    doubleSpinBox = new QDoubleSpinBox(testing);
    doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
    doubleSpinBox->setGeometry(QRect(250, 340, 62, 22));
    doubleSpinBox->setFont(font3);
    doubleSpinBox->setMinimum(0.050000000000000);
    doubleSpinBox->setMaximum(1.000000000000000);
    doubleSpinBox->setSingleStep(0.050000000000000);
    doubleSpinBox->setValue(1.000000000000000);
    group_result = new QGroupBox(testing);
    group_result->setObjectName(QString::fromUtf8("group_result"));
    group_result->setGeometry(QRect(330, 10, 301, 381));
    QFont font5;
    font5.setPointSize(16);
    group_result->setFont(font5);
    label_average_mse = new QLabel(group_result);
    label_average_mse->setObjectName(QString::fromUtf8("label_average_mse"));
    label_average_mse->setGeometry(QRect(10, 40, 231, 16));
    label_average_mse->setFont(font3);
    label_average_mse->setTextFormat(Qt::AutoText);
    label_average_accuracy = new QLabel(group_result);
    label_average_accuracy->setObjectName(
        QString::fromUtf8("label_average_accuracy"));
    label_average_accuracy->setGeometry(QRect(10, 70, 231, 16));
    label_average_accuracy->setFont(font);
    label_average_accuracy->setTextFormat(Qt::AutoText);
    label_precision = new QLabel(group_result);
    label_precision->setObjectName(QString::fromUtf8("label_precision"));
    label_precision->setGeometry(QRect(10, 100, 231, 16));
    label_precision->setFont(font);
    label_precision->setTextFormat(Qt::AutoText);
    label_recall = new QLabel(group_result);
    label_recall->setObjectName(QString::fromUtf8("label_recall"));
    label_recall->setGeometry(QRect(10, 130, 231, 16));
    label_recall->setFont(font);
    label_recall->setTextFormat(Qt::AutoText);
    label_f_mesaure = new QLabel(group_result);
    label_f_mesaure->setObjectName(QString::fromUtf8("label_f_mesaure"));
    label_f_mesaure->setGeometry(QRect(10, 160, 231, 16));
    label_f_mesaure->setFont(font);
    label_f_mesaure->setTextFormat(Qt::AutoText);
    label_spent_time = new QLabel(group_result);
    label_spent_time->setObjectName(QString::fromUtf8("label_spent_time"));
    label_spent_time->setGeometry(QRect(10, 190, 231, 16));
    label_spent_time->setFont(font);
    label_spent_time->setTextFormat(Qt::AutoText);
    lineEdit_average_accuracy = new QLineEdit(group_result);
    lineEdit_average_accuracy->setObjectName(
        QString::fromUtf8("lineEdit_average_accuracy"));
    lineEdit_average_accuracy->setGeometry(QRect(180, 70, 113, 21));
    lineEdit_average_accuracy->setFont(font4);
    lineEdit_average_accuracy->setReadOnly(true);
    lineEdit_average_mse = new QLineEdit(group_result);
    lineEdit_average_mse->setObjectName(
        QString::fromUtf8("lineEdit_average_mse"));
    lineEdit_average_mse->setGeometry(QRect(180, 40, 113, 21));
    lineEdit_average_mse->setFont(font4);
    lineEdit_average_mse->setReadOnly(true);
    lineEdit_precision = new QLineEdit(group_result);
    lineEdit_precision->setObjectName(QString::fromUtf8("lineEdit_precision"));
    lineEdit_precision->setGeometry(QRect(180, 100, 113, 21));
    lineEdit_precision->setFont(font4);
    lineEdit_precision->setReadOnly(true);
    lineEdit_recall = new QLineEdit(group_result);
    lineEdit_recall->setObjectName(QString::fromUtf8("lineEdit_recall"));
    lineEdit_recall->setGeometry(QRect(180, 130, 113, 21));
    lineEdit_recall->setFont(font4);
    lineEdit_recall->setReadOnly(true);
    lineEdit_f_mesaure = new QLineEdit(group_result);
    lineEdit_f_mesaure->setObjectName(QString::fromUtf8("lineEdit_f_mesaure"));
    lineEdit_f_mesaure->setGeometry(QRect(180, 160, 113, 21));
    lineEdit_f_mesaure->setFont(font4);
    lineEdit_f_mesaure->setReadOnly(true);
    lineEdit_spent_time = new QLineEdit(group_result);
    lineEdit_spent_time->setObjectName(
        QString::fromUtf8("lineEdit_spent_time"));
    lineEdit_spent_time->setGeometry(QRect(180, 190, 113, 21));
    lineEdit_spent_time->setFont(font4);
    lineEdit_spent_time->setReadOnly(true);
    tabWidget->addTab(testing, QString());
    handTesting = new QWidget();
    handTesting->setObjectName(QString::fromUtf8("handTesting"));
    graphicsView = new QGraphicsView(handTesting);
    graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
    graphicsView->setGeometry(QRect(30, 60, 300, 300));
    QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(
        graphicsView->sizePolicy().hasHeightForWidth());
    graphicsView->setSizePolicy(sizePolicy2);
    graphicsView->setMinimumSize(QSize(300, 300));
    graphicsView->setMaximumSize(QSize(300, 300));
    graphicsView->setFont(font1);
    graphicsView->viewport()->setProperty("cursor",
                                          QVariant(QCursor(Qt::CrossCursor)));
    graphicsView->setStyleSheet(
        QString::fromUtf8("QGraphicsView {\n"
                          "	background-color: #000;\n"
                          "}"));
    graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    graphicsView->setInteractive(true);
    graphicsView->setSceneRect(QRectF(0, 0, 300, 300));
    button_process = new QPushButton(handTesting);
    button_process->setObjectName(QString::fromUtf8("button_process"));
    button_process->setEnabled(false);
    button_process->setGeometry(QRect(350, 330, 271, 32));
    button_process->setFont(font4);
    button_load_image = new QPushButton(handTesting);
    button_load_image->setObjectName(QString::fromUtf8("button_load_image"));
    button_load_image->setGeometry(QRect(350, 300, 271, 32));
    button_load_image->setFont(font4);
    label_result = new QLabel(handTesting);
    label_result->setObjectName(QString::fromUtf8("label_result"));
    label_result->setGeometry(QRect(350, 70, 271, 16));
    label_result->setFont(font);
    label_result->setTextFormat(Qt::AutoText);
    label_result->setAlignment(Qt::AlignCenter);
    label_answer = new QLabel(handTesting);
    label_answer->setObjectName(QString::fromUtf8("label_answer"));
    label_answer->setGeometry(QRect(350, 100, 271, 101));
    QFont font6;
    font6.setPointSize(70);
    label_answer->setFont(font6);
    label_answer->setStyleSheet(
        QString::fromUtf8("QLabel {\n"
                          "	background-color: white;\n"
                          "	color: #000;\n"
                          "}"));
    label_answer->setAlignment(Qt::AlignCenter);
    button_clear = new QPushButton(handTesting);
    button_clear->setObjectName(QString::fromUtf8("button_clear"));
    button_clear->setGeometry(QRect(350, 270, 271, 32));
    button_clear->setFont(font4);
    label = new QLabel(handTesting);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(350, 219, 271, 41));
    QFont font7;
    font7.setItalic(true);
    font7.setUnderline(false);
    font7.setStrikeOut(false);
    label->setFont(font7);
    label->setWordWrap(true);
    tabWidget->addTab(handTesting, QString());
    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    tabWidget->setCurrentIndex(0);

    QMetaObject::connectSlotsByName(MainWindow);
  } // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    label_realization->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\240\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320"
        "\270\321\217 "
        "\320\277\320\265\321\200\321\206\320\265\320\277\321\202\321\200\320"
        "\276\320\275\320\260:",
        nullptr));
    matrix_mode->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\234\320\260\321\202\321\200\320\270"
                                    "\321\207\320\275\320\260\321\217",
                                    nullptr));
    graph_mode->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\223\321\200\320\260\321\204\320\276\320\262\320\260\321\217",
        nullptr));
    text_browser->setHtml(QCoreApplication::translate(
        "MainWindow",
        "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
        "\"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
        "<html><head><meta name=\"qrichtext\" content=\"1\" /><style "
        "type=\"text/css\">\n"
        "p, li { white-space: pre-wrap; }\n"
        "</style></head><body style=\" font-family:'Geneva'; font-size:8.25pt; "
        "font-weight:400; font-style:normal;\">\n"
        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; "
        "margin-bottom:0px; margin-left:0px; margin-right:0px; "
        "-qt-block-indent:0; text-indent:0px; font-family:'Arial'; "
        "font-size:11pt;\"><br /></p></body></html>",
        nullptr));
    text_browser->setPlaceholderText(QCoreApplication::translate(
        "MainWindow",
        "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320"
        "\270\321\217 \320\276\320\261 "
        "\320\276\320\261\321\203\321\207\320\265\320\275\320\270\320\270",
        nullptr));
    label_layers->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320"
        "\262\320\276 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 "
        "\321\201\320\273\320\276\320\265\320\262:",
        nullptr));
    button_save_weights->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321"
        "\214 \320\262\320\265\321\201\320\260",
        nullptr));
    button_load_weights->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321"
        "\214 \320\262\320\265\321\201\320\260",
        nullptr));
    label_epochs->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320"
        "\262\320\276 \321\215\320\277\320\276\321\205:",
        nullptr));
    check_build_graph->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321"
        "\214 \320\263\321\200\320\260\321\204\320\270\320\272",
        nullptr));
    check_cross_validation->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\232\321\200\320\276\321\201\321\201-"
                                    "\320\262\320\260\320\273\320\270\320\264"
                                    "\320\260\321\206\320\270\321\217",
                                    nullptr));
    button_learning->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265",
        nullptr));
    label_k->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\247\320\270\321\201\320\273\320\276 "
        "\320\263\321\200\321\203\320\277\320\277 k:",
        nullptr));
    check_default_weights->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320"
        "\262\320\260\321\202\321\214 "
        "\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320"
        "\265 \320\262\320\265\321\201\320\260",
        nullptr));
    button_load_file_for_learning->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321"
        "\214 \321\204\320\260\320\271\320\273 \320\264\320\273\321\217 "
        "\320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217",
        nullptr));
    label_gif->setText(QString());
    tabWidget->setTabText(
        tabWidget->indexOf(learning),
        QCoreApplication::translate(
            "MainWindow",
            "\320\236\320\261\321\203\321\207\320\265\320\275\320\270\320\265",
            nullptr));
    perceptron_matrix_mode_test->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\234\320\260\321\202\321\200\320\270"
                                    "\321\207\320\275\320\260\321\217",
                                    nullptr));
    perceptron_graph_mode_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\223\321\200\320\260\321\204\320\276\320\262\320\260\321\217",
        nullptr));
    label_realization_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\240\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320"
        "\270\321\217 "
        "\320\277\320\265\321\200\321\206\320\265\320\277\321\202\321\200\320"
        "\276\320\275\320\260:",
        nullptr));
    check_now_realization->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\242\320\265\320\272\321\203\321\211\320\260\321\217 "
        "\321\200\320\265\320\260\320\273\320\270\320\267\320\260\321\206\320"
        "\270\321\217",
        nullptr));
    button_load_weights_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321"
        "\214 \320\262\320\265\321\201\320\260",
        nullptr));
    button_load_file_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 "
        "\321\204\320\260\320\271\320\273 "
        "\321\202\320\265\321\201\321\202\320\276\320\262\321\213\321\205 "
        "\320\264\320\260\320\275\320\275\321\213\321\205",
        nullptr));
    button_run_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321"
        "\214 "
        "\321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320"
        "\260\320\275\320\270\320\265",
        nullptr));
    label_part_of_test->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\247\320\260\321\201\321\202\321\214 "
        "\321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\271 "
        "\320\262\321\213\320\261\320\276\321\200\320\272\320\270:",
        nullptr));
    group_result->setTitle(QCoreApplication::translate(
        "MainWindow",
        "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321"
        "\202 "
        "\321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320"
        "\260\320\275\320\270\321\217",
        nullptr));
    label_average_mse->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 MSE:",
        nullptr));
    label_average_accuracy->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\241\321\200\320\265\320\264\320\275\321\217\321\217 "
        "\321\202\320\276\321\207\320\275\320\276\321\201\321\202\321\214:",
        nullptr));
    label_precision->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\237\321\200\320\265\321\206\320\270\320\267\320\270\320\276\320"
        "\275\320\275\320\276\321\201\321\202\321\214:",
        nullptr));
    label_recall->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\237\320\276\320\273\320\275\320\276\321\202\320\260:", nullptr));
    label_f_mesaure->setText(QCoreApplication::translate(
        "MainWindow", "f-\320\274\320\265\321\200\320\260:", nullptr));
    label_spent_time->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\321\202\321\200\320\260\321\207\320\265\320\275\320"
        "\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217:",
        nullptr));
    lineEdit_average_accuracy->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    lineEdit_average_mse->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    lineEdit_precision->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    lineEdit_recall->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    lineEdit_f_mesaure->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    lineEdit_spent_time->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    tabWidget->setTabText(
        tabWidget->indexOf(testing),
        QCoreApplication::translate(
            "MainWindow",
            "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262"
            "\320\260\320\275\320\270\320\265",
            nullptr));
    button_process->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\236\320\261\321\200\320\260\320\261"
                                    "\320\276\321\202\320\260\321\202\321\214",
                                    nullptr));
    button_load_image->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321"
        "\214 "
        "\320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320"
        "\275\320\270\320\265",
        nullptr));
    label_result->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\240\320\265\320\267\321\203\320\273"
                                    "\321\214\321\202\320\260\321\202:",
                                    nullptr));
    label_answer->setText(QString());
    button_clear->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214",
        nullptr));
    label->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320"
        "\260 "
        "\320\275\320\265\320\271\321\200\320\276\320\275\320\275\320\276\320"
        "\271 \321\201\320\265\321\202\320\270 "
        "\320\277\321\200\320\276\320\270\321\201\321\205\320\276\320\264\320"
        "\270\321\202 \320\262\320\276 "
        "\320\262\320\272\320\273\320\260\320\264\320\272\320\265 "
        "\"\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320"
        "\260\320\275\320\270\320\265\"",
        nullptr));
    tabWidget->setTabText(
        tabWidget->indexOf(handTesting),
        QCoreApplication::translate(
            "MainWindow",
            "\320\240\321\203\321\207\320\275\320\276\320\265 "
            "\321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262"
            "\320\260\320\275\320\270\320\265",
            nullptr));
  } // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
