# $OpenBSD: Makefile,v 1.8 2012/09/25 18:52:14 abieber Exp $

COMMENT =	daemon to sync taskwarrior instances

VERSION =	0.0.1
DISTNAME =	taskd-${VERSION}
CATEGORIES =	productivity

HOMEPAGE =	http://www.taskwarrior.org/

MASTER_SITES =	http://deftly.net/

# GPLv2
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

MODULES =		devel/cmake

WANTLIB =		c m stdc++

CONFIGURE_STYLE =	cmake

CONFIGURE_ARGS +=	-DTASKD_DOCDIR=share/taskd \
			-DCMAKE_INSTALL_PREFIX=${LOCALBASE} \
			-DPROJECT_VERSION=0.0.1 \
			-DTASKD_MAN1DIR=man/man1

CONFIGURE_ENV +=	CFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

NO_REGRESS =		Yes

.include <bsd.port.mk>
