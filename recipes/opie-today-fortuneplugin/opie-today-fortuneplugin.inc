DESCRIPTION = "'fortune' plugin for Today"
SECTION = "opie/today"
PRIORITY = "optional"
LICENSE = "GPL"
DEPENDS = "opie-today libqtaux2"
RDEPENDS_${PN} = "fortune-mod opie-today"
APPNAME = "todayfortuneplugin"

S = "${WORKDIR}/fortune"

inherit opie
