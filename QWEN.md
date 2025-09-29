# KRunner Qalculator Plugin - Qwen Context

## Project Overview

**KRunner Qalculator Plugin** is a powerful calculator plugin for KDE Plasma's KRunner that leverages the advanced capabilities of libqalculate. This provides users with a sophisticated computational tool accessible directly from KRunner (Alt+Space).

### Key Features
- Arbitrary precision calculations
- Support for solving algebraic equations
- Symbolic computation for exact results
- Currency conversion support
- Unit conversion capabilities
- Advanced mathematical functions
- Quick result insertion into KRunner query line
- Copy results to clipboard with a single click

### Technology Stack
- **Language**: C++17
- **Framework**: Qt6 and KDE Frameworks 6 (KF6)
- **Build System**: CMake
- **Dependencies**: libqalculate (qalc binary), KRunner development files
- **KDE Components**: KRunner, I18n, CoreAddons

### Project Structure
```
krunner_qalc/
├── install.sh          # Installation script
├── uninstall.sh        # Uninstallation script
├── postinst            # Post-installation script
├── postrm              # Post-removal script
├── README.md           # Main documentation
├── README_RU.md        # Russian documentation
├── LICENSE             # GPL v2 license
├── src/                # Source code directory
│   ├── CMakeLists.txt  # Build configuration
│   ├── manifest.json   # KRunner plugin metadata
│   ├── qalculatorrunner.cpp  # Main implementation
│   └── qalculatorrunner.h    # Header file
└── build/              # Build directory (generated)
```

### Source Code Architecture
The plugin follows KDE's KRunner plugin architecture:
- **QalculatorRunner class**: Extends KRunner::AbstractRunner
- **match() method**: Processes user queries and generates matches
- **run() method**: Handles user actions (copy to clipboard, insert result)
- **calculate() method**: Interfaces with the qalc command-line tool
- **manifest.json**: Defines plugin metadata and configuration

### Building and Running

#### Installation
```bash
# Prerequisites
sudo apt install cmake make libkf6runner-dev libkf6coreaddons-dev libkf6i18n-dev libqalculate-dev

# Install the plugin
./install.sh
```

The installation script will:
1. Check for required dependencies
2. Create a build directory
3. Configure the project with CMake
4. Build with make (using all available cores)
5. Install to system directories with sudo
6. Restart KRunner automatically

#### Manual Build Process
```bash
# Create build directory
mkdir build && cd build

# Configure (for Plasma 6)
cmake ../src/ -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release -DKDE_INSTALL_USE_QT_SYS_PATHS=ON -DBUILD_TESTING=OFF -DBUILD_WITH_QT6=ON

# Build
make -j$(nproc)

# Install
sudo make install
```

#### Uninstallation
```bash
./uninstall.sh
```

### Development Conventions
- **Coding Style**: Follows KDE C++ coding standards
- **Qt Features**: Uses Qt's MOC (Meta-Object Compiler) and automatic moc/rcc
- **Internationalization**: Uses KLocalizedString for translations
- **Memory Management**: Leverages Qt's parent-child object hierarchy
- **API**: Adheres to KRunner plugin interface contracts

### Plugin Configuration
The `manifest.json` file configures:
- Plugin metadata (name, version, author, license)
- KRunner integration settings (minimum query length, triggers)
- Default icon and category

### How It Works
1. When the user types in KRunner, the plugin checks if it contains a mathematical expression
2. If the query is valid, it calls the `qalc` command-line calculator with appropriate parameters
3. Results are processed and presented as KRunner matches
4. Users can copy results to clipboard or insert them back into the query line

### Dependencies
- **Runtime**: libqalculate (qalc binary must be in $PATH)
- **Build**: Qt6, KF6 development libraries (Runner, I18n, CoreAddons)
- **System**: KDE Plasma 6.x, CMake, make, sudo privileges

### Key Files and Their Purposes
- `qalculatorrunner.cpp`: Core logic for processing queries and executing calculations
- `qalculatorrunner.h`: Class declaration and KRunner integration interfaces
- `CMakeLists.txt`: Build configuration and system dependencies
- `manifest.json`: Plugin metadata required by KRunner framework
- `install.sh`: Automated build and installation script

### Troubleshooting
Common issues and solutions:
- Plugin not appearing: Ensure qalc is installed and in PATH, restart KRunner
- Calculations not working: Verify libqalculate installation and proper syntax
- Build failures: Check for missing KDE development libraries

### License
This project is licensed under the GNU General Public License v2.0 (GPL-2.0).