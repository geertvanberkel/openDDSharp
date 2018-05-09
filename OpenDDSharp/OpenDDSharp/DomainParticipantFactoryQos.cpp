/*********************************************************************
This file is part of OpenDDSharp.

OpenDDSharp is a .NET wrapper for OpenDDS
Copyright (C) 2018 Jose Morato

OpenDDSharp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenDDSharp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OpenDDSharp. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
#include "DomainParticipantFactoryQos.h"

OpenDDSharp::DDS::DomainParticipantFactoryQos::DomainParticipantFactoryQos() {	
	entity_factory = gcnew OpenDDSharp::DDS::EntityFactoryQosPolicy();
};

OpenDDSharp::DDS::EntityFactoryQosPolicy^ OpenDDSharp::DDS::DomainParticipantFactoryQos::EntityFactory::get() {
	return entity_factory;
};

::DDS::DomainParticipantFactoryQos OpenDDSharp::DDS::DomainParticipantFactoryQos::ToNative() {
	::DDS::DomainParticipantFactoryQos qos;

	qos.entity_factory = entity_factory->ToNative();	

	return qos;
};

void OpenDDSharp::DDS::DomainParticipantFactoryQos::FromNative(::DDS::DomainParticipantFactoryQos qos) {
	entity_factory->FromNative(qos.entity_factory);	
};
