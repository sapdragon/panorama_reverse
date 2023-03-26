Reverse Engineering the Panorama UI Framework in CS:GO 
====

This repository contains the results of reverse engineering the Panorama UI framework used in Counter-Strike: Global Offensive. 

Panorama is a new Valve-developed UI framework. It is heavily influenced by and closely resembles modern web authoring (HTML5/CSS/JS). It enables rapid development, high quality, and high performance interfaces as well as seamless integration with game content (3D models, particles, etc.) 

In this repository, you can find:

- The decompiled Panorama functions and reversed vtables in the ./reversed/{module}/ folder. 
- The Panorama binary files (dlls) in the ./binaries folder. These are the compiled Panorama files extracted from the CS:GO game files. 

The goal of this reverse engineering work is to uncover the internals of how the new Panorama UI system works in CS:GO and make this knowledge publicly available to anyone interested in studying or modding the game. 

This work accompanies the article "Analyzing Panorama: In Search of Graphic Personalization of CS:GO" which explains the basic architecture of the Panorama framework. You can find the article here: soon...