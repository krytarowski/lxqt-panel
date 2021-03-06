/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * LXDE-Qt - a lightweight, Qt based, desktop toolset
 * http://lxqt.org
 *
 * Copyright: 2015 LxQt team
 * Authors:
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */


#ifndef DESKTOPSWITCHCERCONFIGURATION_H
#define DESKTOPSWITCHCERCONFIGURATION_H

#include <LXQt/Settings>

#include <QDialog>

class QSettings;
class QAbstractButton;

namespace Ui {
    class DesktopSwitchConfiguration;
}

class DesktopSwitchConfiguration : public QDialog
{
    Q_OBJECT

public:
    explicit DesktopSwitchConfiguration(QSettings *settings, QWidget *parent = 0);
    ~DesktopSwitchConfiguration();

private:
    Ui::DesktopSwitchConfiguration *ui;
    QSettings *mSettings;
    LxQt::SettingsCache mOldSettings;

private slots:
    /*
       Saves settings in conf file.
    */
    void loadSettings();
    void dialogButtonsAction(QAbstractButton *btn);
    void rowsChanged(int value);
    void labelTypeChanged(int type);
};

#endif // DESKTOPSWITCHCERCONFIGURATION_H
