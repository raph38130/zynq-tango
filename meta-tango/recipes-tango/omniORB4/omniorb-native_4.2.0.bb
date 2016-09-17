SECTION = "devel"
DEPENDS += "python-native"
PR = "r2"
LICENSE = "GPLv3 | LGPLv3"
LIC_FILES_CHKSUM = " \
		 file://COPYING;md5=75b02c2872421380bbd47781d2bd75d3 \
"

SRC_URI = "http://downloads.sourceforge.net/project/omniorb/omniORB/omniORB-4.2.0/omniORB-4.2.0.tar.bz2;name=omniORB420tarbz \
	  file://omniorb_4.1.7.patch;patch=1 \
"

SRC_URI[omniORB420tarbz.md5sum] = "f1e104d0a2df92829c1b37a853f4805d"
SRC_URI[omniORB420tarbz.sha256sum] = "74c273fc997c2881b128feb52182dbe067acfecc4cf37475f43c104338eba8bc"

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
