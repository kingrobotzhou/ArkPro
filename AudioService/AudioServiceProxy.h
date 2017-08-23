/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp AudioManager1.xml -i AudioManager1.h -p AudioManager1Proxy
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef AUDIOMANAGER1PROXY_H_1488426491
#define AUDIOMANAGER1PROXY_H_1488426491

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface Local.DbusServer.AudioManager
 */
class LocalDbusServerAudioManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "Local.DbusServer.AudioManager"; }

public:
    LocalDbusServerAudioManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~LocalDbusServerAudioManagerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> requestDecreaseVolume()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requestDecreaseVolume"), argumentList);
    }

    inline QDBusPendingReply<> requestFMToggle()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requestFMToggle"), argumentList);
    }

    inline QDBusPendingReply<> requestIncreaseVolume()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requestIncreaseVolume"), argumentList);
    }

    inline QDBusPendingReply<> requestOpenFM(int open)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(open);
        return asyncCallWithArgumentList(QLatin1String("requestOpenFM"), argumentList);
    }

    inline QDBusPendingReply<> requestSetFreqency(int freq)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(freq);
        return asyncCallWithArgumentList(QLatin1String("requestSetFreqency"), argumentList);
    }

    inline QDBusPendingReply<> requestSetVolume(int volume)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(volume);
        return asyncCallWithArgumentList(QLatin1String("requestSetVolume"), argumentList);
    }

    inline QDBusPendingReply<> requestStart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requestStart"), argumentList);
    }

    inline QDBusPendingReply<> requestget()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requestget"), argumentList);
    }

    inline QDBusPendingReply<> requsetIsOpenFM()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("requsetIsOpenFM"), argumentList);
    }

    inline QDBusPendingReply<> requstset(int volume)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(volume);
        return asyncCallWithArgumentList(QLatin1String("requstset"), argumentList);
    }

    inline QDBusPendingReply<> synchronize()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("synchronize"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void onFMChange(int freq);
    void onFMIsOpen(int open);
    void onVolumeChange(int volume);
    void onVolumeRangeChange(int min, int max);
};

namespace Local {
  namespace DbusServer {
    typedef ::LocalDbusServerAudioManagerInterface AudioManager;
  }
}
#endif