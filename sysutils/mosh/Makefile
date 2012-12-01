# $OpenBSD: Makefile.template,v 1.61 2012/03/29 13:41:58 sthen Exp $
COMMENT =		more responsive and robust ssh

DISTNAME =		mosh-1.2.3
CATEGORIES =		sysutils

HOMEPAGE =		http://mosh.mit.edu/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

#GPLv3
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

# "make port-lib-depends-check" can help
#WANTLIB =		???
MASTER_SITES =		https://github.com/downloads/keithw/mosh/

BUILD_DEPENDS =	devel/protobuf

CONFIGURE_STYLE =	gnu
CONFIGURE_env+=	PREFIX=${PREFIX} \
								CFLAGS="${CFLAGS} -I${LOCALBASE}/include"

.include <bsd.port.mk>
