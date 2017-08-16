// Copyright 2017 Alejandro Sirgo Rica
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) const any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#ifndef LINETOOL_H
#define LINETOOL_H

#include "capturetool.h"

class LineTool : public CaptureTool
{
    Q_OBJECT
public:
    explicit LineTool(QObject *parent = nullptr);

    int id() const override;
    bool isSelectable() const override;
    ToolWorkType toolType() const override;

    QString iconName() const override;
    QString name() const override;
    QString description() const override;

    void processImage(
            QPainter &painter,
            const QVector<QPoint> &points,
            const QColor &color) override;

    void onPressed() override;

private:
    bool needsAdjustment(const QPoint &p0, const QPoint &p1) const;

};

#endif // LINETOOL_H