*BlackBerry* Attachment Service
28. April 2017
  • Security Advisory
ARTICLE NUMBER
000116517
OVERVIEW
A corrupt Tagged Image File Format (TIFF) file sent to BlackBerry device users may prevent them from viewing attachments.
OVERVIEW MORE INFORMATION
Visit www.blackberry.com/security for more information on BlackBerry security.
AFFECTED PRODUCTS AND RESOLUTIONS
Read the following to determine if your BlackBerry product is affected.
AFFECTED PRODUCTS
BlackBerry® Enterprise Server 4.0 and later
IBM® Lotus® Domino®
Microsoft® Exchange
Novell® GroupWise®
RESOLUTION
To resolve this problem, complete the steps below that correspond to your environment.
 
Microsoft Exchange
 
For BlackBerry Enterprise Server software version 4.0, install Service Pack 3, then install software version 4.0 Service Pack 3 Hotfix 3.
 
IBM Lotus Domino
 
For BlackBerry Enterprise Server software version 4.0, install Service Pack 3, then install software version 4.0 Service Pack 3 Hotfix 4.
 
Novell GroupWise
 
Install BlackBerry Enterprise Server software version 4.0 Service Pack 3, then install software version 4.0 Service Pack 3 Hotfix 1.
 
Note: To obtain the BlackBerry Enterprise Server software, go to the BlackBerry Software Download Information web site.
MITIGATION MORE INFORMATION
BlackBerry device users may not be able to view attachments. There is no impact on any other services (for example, sending and receiving messages, making phone calls, browsing the Internet, and running BlackBerry device applications to access a corporate network).
VULNERABILITY INFORMATION
A corrupt TIFF file sent to a BlackBerry device user prevents the BlackBerry device user from viewing attachments.
 
The BlackBerry Attachment Service automatically restarts either immediately or within a specified time period (the default is 25 minutes). The administrator can manually restart the BlackBerry Attachment Service at any time.
MITIGATIONS
Complete the resolution actions documented in this advisory.
WORKAROUND
An administrator can exclude TIFF images from being processed by the BlackBerry Attachment Service in the BlackBerry Enterprise Server, or disable the Attachment Service completely.
 
To exclude TIFF images from being processed by the BlackBerry Attachment Service, complete the following steps:
 
 
On the BlackBerry Enterprise Server, click Start>Programs> BlackBerry Enterprise Server>BlackBerry Enterprise Server Configuration.
Click the Attachment Server tab.
In the Format Extensions field, delete the.tiff and .tif extensions.
Note: The Format Extensions field is an editable field that lists all the extensions that the BlackBerry Attachment Service will open. A colon is used as a delimiter.
Click Apply, then click OK.
In Microsoft Windows® Administrative Tools, double-clickServices.
Right-click BlackBerry Attachment Service, then click Stop.
Right-click BlackBerry Attachment Service, then click Start.
Close the Services window.
For Microsoft Exchange and Novell GroupWise, follow these additional steps:
In Administrative Tools, double-click Services.
Right-click BlackBerry Dispatcher, then click Stop.
Right-click BlackBerry Dispatcher, then click Start.
Close the Services window.
 
Important: Restarting certain BlackBerry Enterprise Server services will delay message delivery to BlackBerry devices. For more information, see KB-04789.
For IBM Lotus Domino, follow these additional steps:
Open the Lotus Domino Administrator, then click theServer tab.
Click the Status tab, then clickServer Console.
In the Domino Command field, type tell BES quit and pressENTER.
In the Domino Command field, type load BES and pressENTER.
Close the Lotus Domino Administrator.
Even though the .tiff and .tif extensions have been removed from the list of supported file types, the BlackBerry Attachment Service may automatically detect a TIFF file with a renamed extension and attempt to process the file. Administrators may need to disable the image attachment distiller.
To disable the image attachment distiller, complete the following steps:
On the BlackBerry Enterprise Server, clickStart>Programs> BlackBerry Enterprise Server>BlackBerry Enterprise Server Configuration.
On the Attachment Server tab, select Attachment Server from the Configuration Option drop-down list.
In the Distiller Settings section, clear theEnabled check box for Image Attachments.
Click Apply, then clickOK.
In Administrative Tools, double-clickServices.
Right-click BlackBerry Attachment Service, then click Stop.
Right-click BlackBerry Attachment Service, then click Start.
Close the Services window.
For Microsoft Exchange and Novell GroupWise, follow these additional steps:
In Administrative Tools, double-clickServices.
Right-click BlackBerry Dispatcher, then clickStop.
Right-click BlackBerry Dispatcher, then clickStart.
Close the Services window.
For IBM Lotus Domino, follow these additional steps:
Open the Lotus Domino Administrator, then click theServer tab.
Click the Status tab, then clickServer Console.
In the Domino Command field, type tell BES quit and pressENTER.
In the Domino Command field, type load BES and pressENTER.
Close the Lotus Domino Administrator.
AFFECTED AREAS MORE INFORMATION
Issue severity not assigned.
DEFINITIONS
This article is in reference to US-Computer Emergency Readiness Team (US-CERT) Advisory VU#570768.
ACKNOWLEDGEMENTS
A presentation by FX of Phenoelit has identified an issue in the BlackBerry Enterprise Server that is known to Research In Motion (RIM) and has been corrected in current releases of the BlackBerry Enterprise Server.
CHANGE LOG

01-20-2006
First published

09-10-2015
Integrated into the new public Knowlegebase; no changes to content.
