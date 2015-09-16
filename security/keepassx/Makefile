# $OpenBSD: Makefile,v 1.6 2013/03/11 11:41:25 espie Exp $

COMMENT =	management tool for sensitive data

DISTNAME =	keepassx-2.0-alpha6
CATEGORIES =	security
REVISION =	0

HOMEPAGE =	http://www.keepassx.org/

MAINTAINER =	Steven Mestdagh <steven@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	https://www.keepassx.org/dev/attachments/download/69/

MODULES =	x11/qt4 devel/cmake

WANTLIB +=	QtDBus QtGui X11 Xtst c gcrypt m pthread stdc++ z

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info 

.include <bsd.port.mk>
