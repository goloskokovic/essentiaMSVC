// This whitelist is a combination of the taglib conversion matrices
// and the picard tag matrix:
// https://github.com/taglib/taglib/blob/072851869a2980dab4aefd471ad7dd707993d74f/taglib/toolkit/tpropertymap.h
// https://github.com/taglib/taglib/blob/072851869a2980dab4aefd471ad7dd707993d74f/taglib/asf/asftag.cpp
// https://github.com/taglib/taglib/blob/072851869a2980dab4aefd471ad7dd707993d74f/taglib/mp4/mp4tag.cpp
// https://github.com/taglib/taglib/blob/072851869a2980dab4aefd471ad7dd707993d74f/taglib/mpeg/id3v2/id3v2frame.cpp
// http://picard.musicbrainz.org/docs/mappings/
const char* tagWhitelist[] = {
    "ACOUSTID_FINGERPRINT",
    "ACOUSTID_ID",
    "ALBUM",
    "ALBUMARTIST",
    "ALBUMARTISTSORT",
    "ALBUMSORT",
    "ARRANGER",
    "ARTIST",
    "ARTISTSORT",
    "ARTISTWEBPAGE",
    "ASIN",
    "AUDIOSOURCEWEBPAGE",
    "BARCODE",
    "BPM",
    "CATALOGNUMBER",
    "COMPILATION",
    "COMPOSER",
    "COMPOSERSORT",
    "CONDUCTOR",
    "CONTENTGROUP",
    "COPYRIGHT",
    "COPYRIGHTURL",
    "DATE",
    "DISCNUMBER",
    "DISCSUBTITLE",
    "DISCTOTAL",
    "DJMIXER",
    "ENCODEDBY",
    "ENCODERSETTINGS",
    "ENCODING",
    "ENCODINGTIME",
    "ENGINEER",
    "FILETYPE",
    "FILEWEBPAGE",
    "GENRE",
    "GROUPING",
    "INITIALKEY",
    "ISRC",
    "LABEL",
    "LANGUAGE",
    "LENGTH",
    "LICENSE",
    "LYRICIST",
    "MEDIA",
    "MIXER",
    "MOOD",
    "MUSICBRAINZ ALBUM RELEASE COUNTRY",
    "MUSICBRAINZ ALBUM STATUS",
    "MUSICBRAINZ ALBUM TYPE",
    "MUSICBRAINZ_ALBUMARTISTID",
    "MUSICBRAINZ_ALBUMID",
    "MUSICBRAINZ_ARTISTID",
    "MUSICBRAINZ_DISCID",
    "MUSICBRAINZ_RELEASEGROUPID",
    "MUSICBRAINZ_RELEASETRACKID",
    "MUSICBRAINZ_TRACKID",
    "MUSICBRAINZ_TRMID",
    "MUSICBRAINZ_WORKID",
    "MUSICIP_PUID",
    "ORIGINALALBUM",
    "ORIGINALARTIST",
    "ORIGINALDATE",
    "ORIGINALFILENAME",
    "ORIGINALLYRICIST",
    "ORIGINALYEAR",
    "OWNER",
    "PAYMENTWEBPAGE",
    "PERFORMER",
    "PLAYLISTDELAY",
    "PRODUCEDNOTICE",
    "PRODUCER",
    "PUBLISHERWEBPAGE",
    "RADIOSTATION",
    "RADIOSTATIONOWNER",
    "RADIOSTATIONWEBPAGE",
    "RELEASECOUNTRY",
    "RELEASEDATE",
    "RELEASESTATUS",
    "RELEASETYPE",
    "REMIXER",
    "SCRIPT",
    "SHOWSORT",
    "SUBTITLE",
    "TAGGINGDATE",
    "TITLE",
    "TITLESORT",
    "TOTALDISCS",
    "TOTALTRACKS",
    "TRACKNUMBER",
    "TRACKTOTAL",
    "WEBSITE",
    "WORK",
    "WRITER"
};
