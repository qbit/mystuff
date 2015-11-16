# $OpenBSD: Makefile.template,v 1.72 2015/04/08 17:53:19 sthen Exp $

COMMENT =		povides functions to access serial ports

SHARED_LIBS +=		QtSerialPort 1.0 # 1.0

V =			5.4.2
DISTNAME =		qtserialport-v${V}
CATEGORIES =		devel

PKGNAME =		${DISTNAME:S/v//}

#WRKDIST =		${WRKDIR}/${DISTNAME:S/-v${V}//}

HOMEPAGE =		http://doc.qt.io/qt-5/qserialport.html

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		https://deftly.net/

MODULES =		x11/qt4

FAKE_FLAGS =		INSTALL_ROOT=${WRKINST}

NO_TEST =		Yes

do-configure:
	cd ${WRKDIST} && env -i ${CONFIGURE_ENV} \
		${LOCALBASE}/bin/qmake4 PREFIX=${PREFIX}

.include <bsd.port.mk>
