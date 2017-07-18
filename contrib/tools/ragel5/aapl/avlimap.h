/*
 *  Copyright 2002 Adrian Thurston <thurston@cs.queensu.ca>
 */

/*  This file is part of Aapl.
 *
 *  Aapl is free software; you can redistribute it and/or modify it under the
 *  terms of the GNU Lesser General Public License as published by the Free
 *  Software Foundation; either version 2.1 of the License, or (at your option)
 *  any later version.
 *
 *  Aapl is distributed in the hope that it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Aapl; if not, write to the Free Software Foundation, Inc., 59
 *  Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _AAPL_AVLIMAP_H
#define _AAPL_AVLIMAP_H

#include "compare.h"
#include "dlist.h"

/**
 * \addtogroup avlitree 
 * @{
 */

/**
 * \class AvliMap
 * \brief Linked key and value oriented AVL tree. 
 *
 * AvliMap stores key and value pairs in elements that managed by the tree. It
 * is intendend to be similar to map template found in the STL. AvliMap
 * requires that a Key type, a Value type, and a class containing a compare()
 * routine for Key be given. Items can be inserted with just a key or with a
 * key and value pair.
 *
 * AvliMap assumes all elements in the tree are allocated on the heap and are
 * to be managed by the tree. This means that the class destructor will delete
 * the contents of the tree. A deep copy will cause existing elements to be
 * deleted first.
 *
 * \include ex_avlimap.cpp
 */

/*@}*/

#define AVLTREE_MAP
#define BASE_EL(name) name
#define BASEKEY(name) name
#define BASELIST DList< AvliMapEl<Key,Value> >
#define AVLMEL_CLASSDEF class Key, class Value, class Compare = CmpOrd<Key>
#define AVLMEL_TEMPDEF class Key, class Value, class Compare
#define AVLMEL_TEMPUSE Key, Value, Compare
#define AvlTree AvliMap
#define Element AvliMapEl<Key,Value>
#define WALKABLE

#include "avlcommon.h"

#undef AVLTREE_MAP
#undef BASE_EL
#undef BASEKEY
#undef BASELIST
#undef AVLMEL_CLASSDEF
#undef AVLMEL_TEMPDEF
#undef AVLMEL_TEMPUSE
#undef AvlTree
#undef Element
#undef WALKABLE

#endif /* _AAPL_AVLIMAP_H */