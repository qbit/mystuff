# $OpenBSD$

COMMENT = 		minimal SSH command and control

MODPY_EGG_VERSION = 	0.8
DISTNAME = 		ansible-${MODPY_EGG_VERSION}
CATEGORIES = 		sysutils

HOMEPAGE = 		http://ansible.github.com/

# GPLv3
PERMIT_PACKAGE_CDROM = 	Yes
PERMIT_PACKAGE_FTP = 	Yes
PERMIT_DISTFILES_CDROM = Yes
PERMIT_DISTFILES_FTP = 	Yes

MASTER_SITES =  https://github.com/downloads/ansible/ansible/

MODULES = 	lang/python

MODPY_SETUPTOOLS = Yes
MODPY_BADEGGS =	ansible

RUN_DEPENDS = 	security/py-paramiko \
		textproc/py-yaml \
		www/py-jinja2

REGRESS_DEPENDS =       devel/py-nose

pre-configure:
		${SUBST_CMD} ${WRKSRC}/lib/ansible/constants.py
		rm ${WRKSRC}/lib/ansible/constants.py.{beforesubst,orig}
do-regress:
		cd ${WRKSRC}/lib && nosetests -v

.include <bsd.port.mk>
