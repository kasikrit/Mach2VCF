/*
 *  Copyright (C) 2010  Regents of the University of Michigan
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SAMHEADERRG_H__
#define __SAMHEADERRG_H__

#include "SamHeaderRecord.h"

class SamHeaderRG : public SamHeaderRecord
{
public:
    // Constructor
    SamHeaderRG();
   
    // Destructor
    virtual ~SamHeaderRG();

    /// Return a pointer to a newly created header record of the appropriate type
    /// that is a copy of this record. The newly created record will not be
    /// deleted by this class and it is the responsibility of the calling method
    /// to handle the deletion.
    /// Returns NULL on failure to copy.
    virtual SamHeaderRecord* createCopy() const;

private:
    SamHeaderRG(const SamHeaderRG& samHeaderRG);
    SamHeaderRG& operator=(const SamHeaderRG& samHeaderRG);
};

#endif
