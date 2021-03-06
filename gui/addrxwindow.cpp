/***************************************************************************
 *   Copyright (C) 2007 - 2016 by Volker Schroer , DL1KSV                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "addrxwindow.h"
#include "parameter.h"

extern Parameter settings;

AddRxWindow::AddRxWindow(QStringList modeList, QWidget* parent)
: QDialog( parent ), Ui::AddRxWindow()
{
  setupUi(this);
  RxMode->addItems(modeList);
  RxMode->setCurrentRow(0);
  TitleText->setText("Rx " + QString().setNum(settings.RxChannels+1));

}

AddRxWindow::~AddRxWindow()
{
}
Mode AddRxWindow::selectedMode()
{
return (Mode) RxMode->currentRow();
}
QString AddRxWindow::titleText()
{
 return TitleText->text();
}
int AddRxWindow::frequency()
{
 return Frequency->value();
}

