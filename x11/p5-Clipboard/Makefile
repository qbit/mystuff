# $OpenBSD: Makefile,v 1.9 2012/08/23 16:02:37 sthen Exp $

COMMENT =	Perl extension to access the x11 clipboard
SHARED_ONLY =	Yes

MODULES =	cpan
DISTNAME =	Clipboard-0.13
CATEGORIES =	x11

MASTER_SITES = http://search.cpan.org/CPAN/authors/id/K/KI/KING/

# Perl
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

WANTLIB += c

RUN_DEPENDS =	x11/xclip

USE_GROFF =	Yes

REGRESS_IS_INTERACTIVE =	x11

.include <bsd.port.mk>
