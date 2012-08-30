/*
    Copyright 2012 Christian Freye
	Copyright 2010 Henning Meyer

	This file is part of KardioPerfusion.

    KardioPerfusion is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    KardioPerfusion is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with KardioPerfusion.  If not, see <http://www.gnu.org/licenses/>.

    Diese Datei ist Teil von KardioPerfusion.

    KardioPerfusion ist Freie Software: Sie können es unter den Bedingungen
    der GNU General Public License, wie von der Free Software Foundation,
    Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren
    veröffentlichten Version, weiterverbreiten und/oder modifizieren.

    KardioPerfusion wird in der Hoffnung, dass es nützlich sein wird, aber
    OHNE JEDE GEWÄHRLEISTUNG, bereitgestellt; sogar ohne die implizite
    Gewährleistung der MARKTFÄHIGKEIT oder EIGNUNG FÜR EINEN BESTIMMTEN ZWECK.
    Siehe die GNU General Public License für weitere Details.

    Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
    Programm erhalten haben. Wenn nicht, siehe <http://www.gnu.org/licenses/>.
*/

#ifndef SEGMENTSELECTBUTTON_H
#define SEGMENTSELECTBUTTON_H

#include <QPushButton>
#include "segmentlistmodel.h"


class SegmentSelectButton : public QPushButton
{
  Q_OBJECT
  public:
  SegmentSelectButton(QWidget *parent = 0);
  const SegmentInfo * getSelectedSegment(void) const { return selectedSegment; }
  void setSegmentListModel(const SegmentListModel *model) { segmentList = model; }
  void setSelectedSegment(const SegmentInfo *segment);
  
  signals:
  void selected(const SegmentInfo *segment);
  
  private slots:
  void onClick();
  private:
  void updateText();
  const SegmentInfo *selectedSegment;
  const SegmentListModel *segmentList;
};

#endif // SEGMENTSELECTBUTTON_H
