#use 5.018002;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
$CC = 'g++' ;
WriteMakefile(
    NAME              => 'SequoiaDB::Node',
    VERSION_FROM      => 'lib/SequoiaDB/Node.pm', # finds $VERSION
    PREREQ_PM         => {}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/SequoiaDB/Node.pm', # retrieve abstract from module
       AUTHOR         => 'root <root@>') : ()),
    LIBS              => ['-L../sdbClient/lib -lsdbcpp -lsdbclient'], # e.g., '-lm'
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => '-I. -I../sdbClient/include -I../sdbClient/include/sdbclient', # e.g., '-I. -I/usr/include/other'
	# Un-comment this if you add C files to link with later:
    # OBJECT            => '$(O_FILES)', # link all the C files too
    'CC'              => $CC,
    'LD'              => '$(CC)',
    'XSOPT'           => '-C++',
);
