# Introduction #

The Notifier comes with a preference pane which allows you to specify the Hudson instances you wish to monitor. Just click on the Notifier's icon (the little gear up there next to the time on your menu bar) and select Preferences. Add your Hudson instances as a comma-separated list to the preference pane's Feed URLs field using one of the following two ways of specifying the instance:

  1. The instance's Remote API
  1. The instance's RSS feed

The RSS feed-based access is a legacy from the initial version of the Notifier and has since been superseded by the Remote API access. Only Remote API-based access provides support for self-signed server certificates and authenticated Hudson instances.

# Remote API #

Obtain your Hudson instance's URL. It typically looks like:

`http://some.server/hudson`

Just take this URL and add it to the "Feed URLs" field on the Notifier's preferences panel. If you would like to connect to an authenticated Hudson instance, append your username and login to the instance's URL like this:

`http://some.server/hudson@username:password`

For either URL you can also use the https-equivalent.

# RSS feed #

You start out with your Hudson instance's URL and append "/rssAll" to the end. Example:

`http://some.server/hudson/rssAll`

This will only work with unauthenticated instances running. Https is only supported with valid server certificates.

# Blacklisting #

You can blacklist certain Hudson jobs by specifying a comma-separated list of strings. If any of the strings is found in a job's name, the Notifier will not display the job (neither in its menu nor as a notification).

If you specify a string with enclosing double quotes, the string will be matched exactly to the job names instead of performing a substring match.