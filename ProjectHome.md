A Growl notifier for Hudson Continuous Integration server running on Cocoa.

### General Information ###

To get the application going you will need Mac OS X 10.6 (Snow Leopard). You should also have Growl installed to get all the juicy notifications on updated build status. There is a pre-compiled version of the notifier available on the [Downloads](http://code.google.com/p/hudson-on-cocoa/downloads/list) page, you can grab the full source and start hacking away on the [Source](http://code.google.com/p/hudson-on-cocoa/source/checkout) page.

Once launched, a grey gear icon is added to your status bar which indicates the current overall build status. Click the icon to access the build status of the individual Hudon Jobs, open the Preferences window and quit the application. You use the Preferences window to configure the Hudons Instances to monitor, a white- / blacklist to allow / disallow certain strings in Job names and some Growl options.

Have a look at the [Configuration](http://code.google.com/p/hudson-on-cocoa/wiki/Configuration) page for details on the individual configuration options and how to specify Hudon Instances to monitor.

Please leave a comment on the [Feedback](http://code.google.com/p/hudson-on-cocoa/wiki/Feedback) page or file an Issue with the [Issue Tracker](http://code.google.com/p/hudson-on-cocoa/issues/list) to get in touch. Every now and then I'll come by and try to help out.


### Features & Todos ###

Cory has added a lot of functionality which makes the notifier much more useful in a multi-Hudson environment. You can now specify an arbitrary amount of Hudson instances to connect to and you can whitelist / blacklist any of the jobs included in those instances. Additionally, I have added support for authenticated Hudson instances and self-signed server certificates. Connections to authenticated instances will use the Hudson Remote API instead of RSS feeds. To support self-signed server certificates, any server certificate is automatically accepted by a Hudson Remote API call. You will find details regarding the notifier's configuration on the wiki's [Configuration](http://code.google.com/p/hudson-on-cocoa/wiki/Configuration) page.

The above update obsoletes pretty much all the Todos I previously had in mind. If you think something is missing from the notifier, get in touch by opening an Issue in the tracker or checking out the [Feedback](http://code.google.com/p/hudson-on-cocoa/wiki/Feedback) wiki page. Let me know in case you'd like to contribute as I currently do not too much time at my hands to move the project where it ought to be. You can reach me by using the google-code nick and appending @gmail.com.

BTW, the icons have been taken / created from the icons created by [Sekkyumu](http://sekkyumu.deviantart.com/) and provided on deviantART ([download here](http://sekkyumu.deviantart.com/art/Developpers-Icons-63052312)). Thanks for this great set of icons! Additionally, some code has been reused from other open-source projects. License details have been included in the respective source code files.