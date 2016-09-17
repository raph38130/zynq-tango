DESCRIPTION = "OmniORB High Performance ORB"
SECTION = "devel"
PRIORITY = "optional"
LICENSE = "LGPL"
REQUIRES += "omniorb-native"
#rp OMNIORNB-NATIVE (no 4)
DEPENDS_virtclass-native += "python-native"
PR = "r3"

LICENSE = "GPLv3 | LGPLv3"
LIC_FILES_CHKSUM = " \
		 file://COPYING;md5=75b02c2872421380bbd47781d2bd75d3 \
"
SRC_URI = "http://downloads.sourceforge.net/project/omniorb/omniORB/omniORB-4.2.1/omniORB-4.2.1.tar.bz2;name=omniORB421tarbz \
file://omniorb_4.1.7.patch;patch=1 \ 
file://omniORB.cfg \
file://omniORB-cross.patch;patch=1 \
file://omniORB_embedded_appl.patch;patch=1 \
file://rm_LongDouble.patch;patch=1 \
"

SRC_URI[omniORB421tarbz.md5sum] = "dbe349d2bd929d349083b303bb4317e5"
SRC_URI[omniORB421tarbz.sha256sum] = "e877e8766f25c98309eef8fa22d900fbf6b15ed372cdcc3e2ad7d100bff43cbd"




S = "${WORKDIR}/omniORB-${PV}"

FILES_${PN}-dev += "${datadir}/idl/omniORB/* ${datadir}/idl/omniORB/cos/*"
TARGET_CC_ARCH += "${LDFLAGS}"

inherit autotools pkgconfig 

do_compile () {
        export EmbeddedSystem=1
        export TOOLBINDIR=${STAGING_BINDIR_NATIVE}
	oe_runmake
}

do_compile_virtclass-native() {
        oe_runmake
}

do_install () {
        # Set a variable that the Makefiles obey for install.
        export EmbeddedSystem=1
        autotools_do_install
        install -d ${D}${sysconfdir}
        install -m 0644 ${WORKDIR}/omniORB.cfg ${D}${sysconfdir}
        install -d ${D}${localstatedir}/omninames

	#rp manualy copy ./tmp/work/x86_64-linux/omniorb-native/4.1.7-r0/build/bin/omniidl to /mnt/poky/bbblack/tmp/sysroots/x86_64-linux/usr/bin/omniidl

	#only executable libraries are stripped by the stripper
	chmod +x ${WORKDIR}/image/usr/lib/lib*
}

do_install_virtclass-native() {
        autotools_do_install

	# Ugly hack so libtool does not find native libs when building cross
	# packages We really only build this package for omniidl anyway

        rm -f  ${D}${libdir}/libomni*
}

BBCLASSEXTEND = "native"
NATIVE_INSTALL_WORKS = "1"
