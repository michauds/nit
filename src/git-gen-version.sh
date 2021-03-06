#!/bin/sh

# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This program is used to generate version number from git refs.
# The version number is stored in a dedicated Nit module.

gen_version() {
	if grep "$*" nit_version.nit >/dev/null 2>&1; then
		:
	else
		cat > nit_version.nit<<END
# This file was generated by git-gen-version.sh
module nit_version
fun nit_version: String do return "$*"
END
		echo "Version $*"
	fi
}

# Are we in the nitc.nit directory?
if [ ! -f nitc.nit ]; then
	if [ -f src/nitc.nit ]; then
		cd src
	else
		echo "Error: no nitc.nit found." >&2
		exit 1
	fi
fi

VN=`git describe --always HEAD 2>/dev/null`
if [ "$?" != "0" ]; then
	if [ -r ../VERSION ]; then
		VN="$(cat ../VERSION)"
	else
		echo >&2 "Error: no VERSION file and not a .git repository."
		exit 1
	fi
fi
if [ -z "$VN" ]; then
	VN="undefined"
fi
if [ -n "$1" ]; then
	VN="${VN}_$1"
fi
if [ -n "$(git diff HEAD 2>/dev/null)" ]; then
	VN="${VN}_dirty"
fi

gen_version "$VN"
