# Copyright (C) 2010, O.S. Systems Software Ltda. All Rights Reserved
# Released under the MIT license

DESCRIPTION = "FreeRDP RDP client"
HOMEPAGE = "http://freerdp.sourceforge.net"
DEPENDS = "virtual/libx11 openssl libxcursor cups alsa-lib"
RDEPENDS_${PN} += "xprop"
SECTION = "x11/network"
LICENSE = "Apache-2.0"

INC_PR = "r7"

inherit pkgconfig autotools

do_configure_prepend() {
	# workaround gcc linking bug
	find ${S} -name 'Makefile.am' | xargs -n 1 sed 's,-pthread,-lpthread -D_REENTRANT,g' -i
}

do_install_append() {
	rm ${D}${libdir}/freerdp/*.a ${D}${libdir}/freerdp/*.la
}
