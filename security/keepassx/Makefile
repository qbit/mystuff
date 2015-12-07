# $OpenBSD: Makefile,v 1.6 2013/03/11 11:41:25 espie Exp $

COMMENT =	management tool for sensitive data

DISTNAME =	keepassx-2.0

#GH_ACCOUNT =	keepassx
#GH_PROJECT =	keepassx
#GH_COMMIT =	6e45cf0dab5270dd245991adaa94ad7c13d75d52

CATEGORIES =	security

HOMEPAGE =	http://www.keepassx.org/
MASTER_SITES =  ${HOMEPAGE}/releases/2.0/

MAINTAINER =	Steven Mestdagh <steven@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

MODULES =	devel/cmake \
		gcc4 \
		x11/qt5

MODGCC4_LANGS=          c++
MODGCC4_ARCHS=          *

WANTLIB += X11 Xi Xtst c gcrypt m pthread z

USE_NINJA =	No

CXXFLAGS+=      -I${X11BASE}/include -fPIC
LDFLAGS+=       -L${X11BASE}/lib -L${MODQT5_LIBDIR} 

CONFIGURE_ENV=  CPPFLAGS="${CPPFLAGS}" \
                LDFLAGS="${LDFLAGS}"

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info

.include <bsd.port.mk>
