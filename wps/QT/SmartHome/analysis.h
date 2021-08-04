#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QTextCodec>


class Analysis : public QObject
{
    Q_OBJECT
public:
    explicit Analysis(QObject* parent = nullptr);

signals:
    void sendQJsonObject(QJsonObject);

private slots:
    void jsonAnalysis(QByteArray msg);
};

#endif // ANALYSIS_H
