os2intra_outdated_flag
======================

Adds a flag type of outdated. Views for admin and block for user.
Adds an expire(datetime) field, which can be added to your contenttypes.
Adds a cronjobs which runs trough nodes which has the expire field, and if they
are expired set the outdated flag on it.

Setup
-----
admin/config/os2intra_outdated_flag
    Disable/Enable cronjob
    Set interval for cronjob. Use [relative php date formats](http://www.php.net/manual/en/datetime.formats.relative.php).
