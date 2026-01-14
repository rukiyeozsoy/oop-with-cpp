TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
    Abstraction/Abstraction.cpp \
    Abstraction/AbstractionConsole.cpp \
    Abstraction/AbstractionFile.cpp \
    Encapsulation/Encapsulation.cpp \
    Inheritance/Inheritance.cpp \
    Inheritance/InheritanceDeveloper.cpp \
    Inheritance/InheritanceManager.cpp \
    NotificationSystem/EmailNotification.cpp \
    NotificationSystem/Notification.cpp \
    NotificationSystem/PushNotification.cpp \
    NotificationSystem/SmsNotification.cpp \
    PaymentSystem/CreditCardPayment.cpp \
    PaymentSystem/PaymentMethod.cpp \
    PaymentSystem/PaypalPayment.cpp \
    Polymorphism/Polymorphism.cpp \
    Polymorphism/PolymorphismCircle.cpp \
    Polymorphism/PolymorphismRectangle.cpp \
    main.cpp

HEADERS += \
    Abstraction/Abstraction.h \
    Abstraction/AbstractionConsole.h \
    Abstraction/AbstractionFile.h \
    Encapsulation/Encapsulation.h \
    Inheritance/Inheritance.h \
    Inheritance/InheritanceDeveloper.h \
    Inheritance/InheritanceManager.h \
    NotificationSystem/EmailNotification.h \
    NotificationSystem/Notification.h \
    NotificationSystem/PushNotification.h \
    NotificationSystem/SmsNotification.h \
    PaymentSystem/CreditCardPayment.h \
    PaymentSystem/PaymentMethod.h \
    PaymentSystem/PaypalPayment.h \
    Polymorphism/Polymorphism.h \
    Polymorphism/PolymorphismCircle.h \
    Polymorphism/PolymorphismRectangle.h
