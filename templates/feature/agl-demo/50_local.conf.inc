EXTRA_IMAGE_FEATURES =+ "debug-tweaks"

# Add webkit as workaround as webengine is broken right now
IMAGE_INSTALL_append = " qtwebkit qtwebkit-examples-examples"
#IMAGE_INSTALL_append = " qtsmarthome cinematicexperience qt5everywheredemo qt5-demo-extrafiles"
#IMAGE_INSTALL_append = " qtwebengine-examples"
