# Music Playlist Project

This project is a simple music playlist manager implemented in C++ using a doubly linked list data structure. Each node in the list represents a music track, containing information such as the title and artist of the track. The previous and next parts of each node represent the previous and next tracks in the playlist, respectively.

## Project Structure

The project is organized as follows:

- `src/main.cpp`: This is the driver file for the project. It uses the `Playlist` and `Track` classes to create and manage a music playlist.

- `src/Track.cpp`: This file defines the methods of the `Track` class.

- `src/Playlist.cpp`: This file defines the methods of the `Playlist` class.

- `include/Track.h`: This header file declares the `Track` class.

- `include/Playlist.h`: This header file declares the `Playlist` class.

- `Makefile`: This file is used to automate the build process.

## Building the Project

To build the project, navigate to the project directory in your terminal and run the following command:

```
make
```

This will compile the source files and link the resulting object files to create the executable.

## Running the Program

After building the project, you can run the program with the following command:

```
./music_playlist
```

This will start the program, allowing you to interact with your music playlist.

## Contributing

If you would like to contribute to this project, please fork the repository, make your changes, and submit a pull request. We appreciate any and all contributions!

## License

This project is licensed under the MIT License. See the `LICENSE` file for more information.