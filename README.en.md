# hust2023_Software Engineering

#### Description

Software Engineer team work of hust's 2023  

#### Software Architecture

Software architecture description

#### Installation

1. The player software in the gitee repository
2. The player core FFmpeg and SDL2 libraries are already built into the include and lib folders in the player_v1
3. Open through the exe file, you can open the .pro file through Qt for secondary development

#### Instructions

This software project is based on FFmepg and SDL2 audio and video players. The FFmpeg library can be used to transcode various audio and video files to facilitate playback. The player is divided into three sections:

1. Core section: FFmpeg/SDL2 player. The project realizes the lowest-level function of the player by calling the library, decompressing, transcoding, parsing, and playing audio and video, and supports audio and video files in different formats.
2. Network section: On the basis of the core function, through the TCP protocol and network API technology, call the open source music search API to obtain the URL of the networked song. And parse the Json file to extract information, and call the preload function to realize the function of searching for music on the online network.
3. User management section: On the basis of the core functions, in order to enrich the user experience, the user management function is realized for the player. This is achieved by building a database.

#### Contribution

1. Fork the repository
2. Create Feat_xxx branch
3. Commit your code
4. Create Pull Request

#### Contributer

李辰昊 郭勇翔 何文轩 马海鹏 段成钢 胡依洋
