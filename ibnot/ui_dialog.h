/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QLabel *thickness;
    QDoubleSpinBox *thickness_spinbox;
    QHBoxLayout *hboxLayout1;
    QLabel *point_size;
    QDoubleSpinBox *point_size_spinbox;
    QHBoxLayout *hboxLayout2;
    QLabel *vertex_size;
    QDoubleSpinBox *vertex_size_spinbox;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *hist_range_label;
    QDoubleSpinBox *hist_range_spin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hist_nbins_label;
    QSpinBox *hist_nbins_spin;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout3;
    QLabel *verbose_label;
    QSpinBox *verbose_spinbox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *stepX_label;
    QDoubleSpinBox *stepX_spin;
    QHBoxLayout *horizontalLayout;
    QLabel *stepW_label;
    QDoubleSpinBox *stepW_spin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *epsilon_label;
    QDoubleSpinBox *epsilon_spin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *frequency_label;
    QSpinBox *frequency_spin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *max_iters_label;
    QSpinBox *max_iters_spin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *tau_label;
    QDoubleSpinBox *tau_spin;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(453, 381);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 330, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 20, 173, 109));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        thickness = new QLabel(layoutWidget);
        thickness->setObjectName(QString::fromUtf8("thickness"));

        hboxLayout->addWidget(thickness);

        thickness_spinbox = new QDoubleSpinBox(layoutWidget);
        thickness_spinbox->setObjectName(QString::fromUtf8("thickness_spinbox"));

        hboxLayout->addWidget(thickness_spinbox);


        verticalLayout_2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        point_size = new QLabel(layoutWidget);
        point_size->setObjectName(QString::fromUtf8("point_size"));

        hboxLayout1->addWidget(point_size);

        point_size_spinbox = new QDoubleSpinBox(layoutWidget);
        point_size_spinbox->setObjectName(QString::fromUtf8("point_size_spinbox"));

        hboxLayout1->addWidget(point_size_spinbox);


        verticalLayout_2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vertex_size = new QLabel(layoutWidget);
        vertex_size->setObjectName(QString::fromUtf8("vertex_size"));

        hboxLayout2->addWidget(vertex_size);

        vertex_size_spinbox = new QDoubleSpinBox(layoutWidget);
        vertex_size_spinbox->setObjectName(QString::fromUtf8("vertex_size_spinbox"));

        hboxLayout2->addWidget(vertex_size_spinbox);


        verticalLayout_2->addLayout(hboxLayout2);

        layoutWidget3 = new QWidget(Dialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(260, 140, 158, 70));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        hist_range_label = new QLabel(layoutWidget3);
        hist_range_label->setObjectName(QString::fromUtf8("hist_range_label"));

        horizontalLayout_4->addWidget(hist_range_label);

        hist_range_spin = new QDoubleSpinBox(layoutWidget3);
        hist_range_spin->setObjectName(QString::fromUtf8("hist_range_spin"));
        hist_range_spin->setDecimals(4);
        hist_range_spin->setMinimum(0.010000000000000);
        hist_range_spin->setMaximum(1.000000000000000);
        hist_range_spin->setSingleStep(0.010000000000000);

        horizontalLayout_4->addWidget(hist_range_spin);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        hist_nbins_label = new QLabel(layoutWidget3);
        hist_nbins_label->setObjectName(QString::fromUtf8("hist_nbins_label"));

        horizontalLayout_2->addWidget(hist_nbins_label);

        hist_nbins_spin = new QSpinBox(layoutWidget3);
        hist_nbins_spin->setObjectName(QString::fromUtf8("hist_nbins_spin"));
        hist_nbins_spin->setMinimum(256);
        hist_nbins_spin->setMaximum(1024);
        hist_nbins_spin->setValue(512);

        horizontalLayout_2->addWidget(hist_nbins_spin);


        verticalLayout_3->addLayout(horizontalLayout_2);

        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(32, 22, 189, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        verbose_label = new QLabel(widget);
        verbose_label->setObjectName(QString::fromUtf8("verbose_label"));

        hboxLayout3->addWidget(verbose_label);

        verbose_spinbox = new QSpinBox(widget);
        verbose_spinbox->setObjectName(QString::fromUtf8("verbose_spinbox"));
        verbose_spinbox->setMaximum(2);

        hboxLayout3->addWidget(verbose_spinbox);


        verticalLayout->addLayout(hboxLayout3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        stepX_label = new QLabel(widget);
        stepX_label->setObjectName(QString::fromUtf8("stepX_label"));

        horizontalLayout_3->addWidget(stepX_label);

        stepX_spin = new QDoubleSpinBox(widget);
        stepX_spin->setObjectName(QString::fromUtf8("stepX_spin"));
        stepX_spin->setDecimals(6);
        stepX_spin->setMinimum(0.000000000000000);
        stepX_spin->setMaximum(10.000000000000000);
        stepX_spin->setSingleStep(0.010000000000000);
        stepX_spin->setValue(0.100000000000000);

        horizontalLayout_3->addWidget(stepX_spin);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stepW_label = new QLabel(widget);
        stepW_label->setObjectName(QString::fromUtf8("stepW_label"));

        horizontalLayout->addWidget(stepW_label);

        stepW_spin = new QDoubleSpinBox(widget);
        stepW_spin->setObjectName(QString::fromUtf8("stepW_spin"));
        stepW_spin->setDecimals(6);
        stepW_spin->setMinimum(0.000000000000000);
        stepW_spin->setMaximum(10.000000000000000);
        stepW_spin->setSingleStep(0.010000000000000);
        stepW_spin->setValue(0.100000000000000);

        horizontalLayout->addWidget(stepW_spin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        epsilon_label = new QLabel(widget);
        epsilon_label->setObjectName(QString::fromUtf8("epsilon_label"));

        horizontalLayout_5->addWidget(epsilon_label);

        epsilon_spin = new QDoubleSpinBox(widget);
        epsilon_spin->setObjectName(QString::fromUtf8("epsilon_spin"));
        epsilon_spin->setDecimals(10);

        horizontalLayout_5->addWidget(epsilon_spin);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frequency_label = new QLabel(widget);
        frequency_label->setObjectName(QString::fromUtf8("frequency_label"));

        horizontalLayout_7->addWidget(frequency_label);

        frequency_spin = new QSpinBox(widget);
        frequency_spin->setObjectName(QString::fromUtf8("frequency_spin"));

        horizontalLayout_7->addWidget(frequency_spin);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        max_iters_label = new QLabel(widget);
        max_iters_label->setObjectName(QString::fromUtf8("max_iters_label"));

        horizontalLayout_6->addWidget(max_iters_label);

        max_iters_spin = new QSpinBox(widget);
        max_iters_spin->setObjectName(QString::fromUtf8("max_iters_spin"));

        horizontalLayout_6->addWidget(max_iters_spin);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tau_label = new QLabel(widget);
        tau_label->setObjectName(QString::fromUtf8("tau_label"));

        horizontalLayout_8->addWidget(tau_label);

        tau_spin = new QDoubleSpinBox(widget);
        tau_spin->setObjectName(QString::fromUtf8("tau_spin"));
        tau_spin->setDecimals(10);

        horizontalLayout_8->addWidget(tau_spin);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Properties", nullptr));
        thickness->setText(QCoreApplication::translate("Dialog", "Line thickness", nullptr));
        point_size->setText(QCoreApplication::translate("Dialog", "Point size", nullptr));
        vertex_size->setText(QCoreApplication::translate("Dialog", "Vertex size", nullptr));
        hist_range_label->setText(QCoreApplication::translate("Dialog", "Hist Range", nullptr));
        hist_nbins_label->setText(QCoreApplication::translate("Dialog", "Hist NBins", nullptr));
        verbose_label->setText(QCoreApplication::translate("Dialog", "Verbose", nullptr));
        stepX_label->setText(QCoreApplication::translate("Dialog", "StepX", nullptr));
        stepW_label->setText(QCoreApplication::translate("Dialog", "StepW", nullptr));
        epsilon_label->setText(QCoreApplication::translate("Dialog", "Epsilon", nullptr));
        frequency_label->setText(QCoreApplication::translate("Dialog", "Update Freq", nullptr));
        max_iters_label->setText(QCoreApplication::translate("Dialog", "Max Iters", nullptr));
        tau_label->setText(QCoreApplication::translate("Dialog", "Tau", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
