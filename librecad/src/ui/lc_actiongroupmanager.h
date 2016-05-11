#ifndef LC_ACTIONGROUPMANAGER_H
#define LC_ACTIONGROUPMANAGER_H

#include <QObject>
#include <QList>
#include <QMap>

class QActionGroup;
class QAction;

class LC_ActionGroupManager : public QObject
{
    Q_OBJECT

public:
    explicit LC_ActionGroupManager(QObject* parent);

    QActionGroup* block;
    QActionGroup* circle;
    QActionGroup* curve;
    QActionGroup* edit;
    QActionGroup* ellipse;
    QActionGroup* file;
    QActionGroup* dimension;
    QActionGroup* info;
    QActionGroup* layer;
    QActionGroup* line;
    QActionGroup* modify;
    QActionGroup* options;
    QActionGroup* other;
    QActionGroup* polyline;
    QActionGroup* restriction;
    QActionGroup* select;
    QActionGroup* snap;
    QActionGroup* view;
    QActionGroup* widgets;

    QList<QActionGroup*> toolGroups();
    QMap<QString, QActionGroup*> allGroups();
    void sortGroupsByName(QList<QActionGroup*>& list);

public slots:
    void toggleSnapExclusiveMode(bool state);

};

#endif // LC_ACTIONGROUPMANAGER_H