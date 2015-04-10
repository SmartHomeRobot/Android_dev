# 1.JDK

    $ sudo apt-get install openjdk-7-jdk
    # Pre Trusty 64-bit machines will also need ia32-libs

# 2.installing
		Download android studio

		Unzip somewhere - e.g. /opt/android-studio
		If you install to /opt, you'll need to fix permissions vis chown to a suitable user 
		Next, setup the studio and download the SDK! 
		$ /opt/android-studio/bin/studio.sh

		Choose a location for the sdk, e.g. /opt/android-sdk

		Start download, this takes a while -> get your chimek ready!

		From the welcome window, select Configure->SDK Manager option and make sure you have installed Android SDK Build Tools 21.2, Android APIs 10 (gingerbread), 13 (honeycomb), 15 (ice cream), 18 (jellybean).
		Some settings you might like to configure:

			Version Control->Github 

			From the welcome window, click the Check for updates now and make sure you have the latest. 

# 3. ~/.zshrc

	$ echo export PATH=\${PATH}:/opt/android-sdk/tools:/opt/android-sdk/platform-tools:/opt/android-studio/bin >> ~/.zshrc
	$ echo export ANDROID_HOME=/opt/android-sdk >> ~/.zshrc
