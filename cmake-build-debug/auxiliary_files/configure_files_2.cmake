# Defining variables
set(MUMBLE_OVERLAY_BINARY_BASENAME "mumbleoverlay.x86_64")
set(MUMBLE_BUILD_YEAR "2023")
set(MUMBLE_INSTALL_ABS_LIBDIR "/usr/local/lib/mumble")

# Configuring files
configure_file("/media/nybsysml/New Volume/Niloy/sentra_dev/mumble-source-code/auxiliary_files/run_scripts/mumble-overlay.in" "/media/nybsysml/New Volume/Niloy/sentra_dev/mumble-source-code/cmake-build-debug/auxiliary_files/mumble-overlay" @ONLY)
