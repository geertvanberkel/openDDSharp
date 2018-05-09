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
#include "InconsistentTopicStatus.h"

OpenDDSharp::DDS::InconsistentTopicStatus::InconsistentTopicStatus(::DDS::InconsistentTopicStatus status) {
	total_count = status.total_count;
	total_count_change = status.total_count_change;
};

System::Int32 OpenDDSharp::DDS::InconsistentTopicStatus::TotalCount::get() {
	return total_count;
};

System::Int32 OpenDDSharp::DDS::InconsistentTopicStatus::TotalCountChange::get() {
	return total_count_change;
};

::DDS::InconsistentTopicStatus OpenDDSharp::DDS::InconsistentTopicStatus::ToNative() {
	::DDS::InconsistentTopicStatus ret;

	ret.total_count = total_count;
	ret.total_count_change = total_count_change;

	return ret;
};

void OpenDDSharp::DDS::InconsistentTopicStatus::FromNative(::DDS::InconsistentTopicStatus status) {
	total_count = status.total_count;
	total_count_change = status.total_count_change;
}
