/*
  Copyright © 2012  Vinícius dos Santos Oliveira

  This file is part of libbta.

  libbta is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#ifndef LIBBTA_GLOBAL_H
#define LIBBTA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBBTA_LIBRARY)
#  define LIBBTA_EXPORT Q_DECL_EXPORT
#else
#  define LIBBTA_EXPORT Q_DECL_IMPORT
#endif

#ifndef LIBBTA_VERSION_MAJOR
#  define LIBBTA_VERSION_MAJOR 0
#endif

#ifndef LIBBTA_VERSION_MINOR
#  define LIBBTA_VERSION_MINOR 1
#endif

#endif // LIBBTA_GLOBAL_H
