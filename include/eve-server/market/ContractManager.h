/*
	------------------------------------------------------------------------------------
	LICENSE:
	------------------------------------------------------------------------------------
	This file is part of EVEmu: EVE Online Server Emulator
	Copyright 2006 - 2011 The EVEmu Team
	For the latest information visit http://evemu.org
	------------------------------------------------------------------------------------
	This program is free software; you can redistribute it and/or modify it under
	the terms of the GNU Lesser General Public License as published by the Free Software
	Foundation; either version 2 of the License, or (at your option) any later
	version.

	This program is distributed in the hope that it will be useful, but WITHOUT
	ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
	FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License along with
	this program; if not, write to the Free Software Foundation, Inc., 59 Temple
	Place - Suite 330, Boston, MA 02111-1307, USA, or go to
	http://www.gnu.org/copyleft/lesser.txt.
	------------------------------------------------------------------------------------
	Author:		Almamu, Aknor Jaden, adapted from /include/eve-server/system/BubbleManager.h authored by Zhur
*/

#ifndef __CONTRACTMANAGER_H_INCL__
#define __CONTRACTMANAGER_H_INCL__


// The purpose of this object is to make a nice container for
// Contracts issued by Characters and Corporations.
class ContractManager {
public:
	ContractManager();
	~ContractManager();

	void Load( ItemFactory item_factory );

	//
	bool UpdateContract( Contract* contractInfo );
	//
	void AddContract( Contract* contractInfo );
    //
    bool GetContract( uint32 contractID, Contract* contract);
	//
	bool RemoveContract( uint32 contractID );

	void clear();

protected:
	ContractDB m_db;
	// container for active contract objects
	std::map<uint32, Contract*> m_contracts;	//we own these
};

#endif /* !__CONTRACTMANAGER__H__INCL__ */
