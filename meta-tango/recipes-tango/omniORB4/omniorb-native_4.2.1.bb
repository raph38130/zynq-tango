SECTION = "devel"
DEPENDS += "python-native"
PR = "r3"
LICENSE = "GPLv3 | LGPLv3"
LIC_FILES_CHKSUM = " \
		 file://COPYING;md5=75b02c2872421380bbd47781d2bd75d3 \
"

SRC_URI = "http://downloads.sourceforge.net/project/omniorb/omniORB/omniORB-4.2.1/omniORB-4.2.1.tar.bz2;name=omniORB421tarbz \
"
#	   file://dii_race.patch;patch=1;force 

SRC_URI[omniORB421tarbz.md5sum] = "dbe349d2bd929d349083b303bb4317e5"
SRC_URI[omniORB421tarbz.sha256sum] = "e877e8766f25c98309eef8fa22d900fbf6b15ed372cdcc3e2ad7d100bff43cbd"

S = "${WORKDIR}/omniORB-${PV}"

inherit native autotools

do_compile () {
        oe_runmake

	#WARNING hack cp omniidl, omnicpp exec and libs to sysroots/x86_64-linux/usr/bin and lib
	cp ${WORKDIR}/build/bin/* ${STAGING_BINDIR_NATIVE}
	#omnicpp
	cp -r ${WORKDIR}/build/lib/* ${STAGING_LIBDIR_NATIVE}
}
# Ugly hack so libtool does not find native libs when building cross packages
# We really only build this package for omniidl anyway
do_install() {
        rm -f  ${STAGING_LIBDIR_NATIVE}/libomni*
}
