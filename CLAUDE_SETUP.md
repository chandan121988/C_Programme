# Claude Sonnet Integration for Visual Studio Code

This guide will help you set up Claude Sonnet AI assistant in Visual Studio Code for this C/C++ programming repository.

## Prerequisites

- Visual Studio Code installed
- An Anthropic API key (get one from https://console.anthropic.com/)

## Setup Instructions

### Step 1: Install Required Extensions

1. Open Visual Studio Code
2. The workspace will automatically prompt you to install recommended extensions
3. Click "Install All" when prompted, or manually install:
   - **Continue** (`continue.continue`) - AI coding assistant that supports Claude
   - **C/C++ Extension Pack** - For C/C++ development support

Alternatively, install via command palette (Ctrl+Shift+P / Cmd+Shift+P):
```
ext install continue.continue
ext install ms-vscode.cpptools-extension-pack
```

### Step 2: Configure Claude Sonnet API Key

1. After installing the Continue extension, you'll see a Continue icon in the sidebar (or press `Ctrl+Shift+R` / `Cmd+Shift+R`)
2. Click the Continue icon to open the Continue panel
3. Click on the gear icon (⚙️) to open settings
4. Add your Anthropic API key in one of these ways:

   **Method A: Using Continue Settings UI**
   - In the Continue settings, find "API Keys"
   - Add your Anthropic API key

   **Method B: Using Environment Variable**
   - Set the environment variable `ANTHROPIC_API_KEY` to your API key
   - Restart VS Code

   **Method C: Edit config file directly**
   - The config file is located at `.vscode/continue_config.json`
   - Replace the empty `"apiKey": ""` with your actual API key
   - Example: `"apiKey": "sk-ant-api03-..."`

### Step 3: Start Using Claude Sonnet

Once configured, you can use Claude Sonnet in several ways:

#### 1. Chat Interface
- Click the Continue icon in the sidebar
- Type your questions or requests in the chat
- Claude will help you with code explanations, debugging, and more

#### 2. Inline Code Suggestions
- As you type, Claude will provide autocomplete suggestions
- Press `Tab` to accept a suggestion

#### 3. Custom Commands
Select some code and use these commands:
- `/explain` - Get a detailed explanation of the code
- `/debug` - Find potential bugs or issues
- `/optimize` - Get optimization suggestions

#### 4. Context-Aware Help
- Claude has access to your open files, terminal output, and git diffs
- This helps provide more relevant and accurate assistance

## Features Available

- **Code Completion**: Intelligent autocomplete powered by Claude Sonnet
- **Code Explanation**: Understand complex C/C++ code
- **Debugging Assistance**: Find and fix bugs
- **Code Optimization**: Improve performance and readability
- **Refactoring**: Restructure code while maintaining functionality
- **Documentation**: Generate comments and documentation

## Keyboard Shortcuts

- `Ctrl+Shift+R` (Windows/Linux) or `Cmd+Shift+R` (Mac): Open Continue panel
- `Tab`: Accept inline suggestion
- `Ctrl+L` (Windows/Linux) or `Cmd+L` (Mac): Add selected code to chat context

## Tips

1. **Be Specific**: The more context you provide, the better Claude's responses
2. **Use Comments**: Add comments describing what you want to achieve
3. **Select Code**: Select relevant code before asking questions for better context
4. **Iterate**: If the first response isn't perfect, refine your question

## Troubleshooting

### Extension Not Working
- Ensure the Continue extension is installed and enabled
- Check that your API key is correctly configured
- Restart VS Code

### No Autocomplete Suggestions
- Check that `editor.inlineSuggest.enabled` is true in settings
- Verify your API key is valid and has available credits
- Ensure you have an active internet connection

### API Key Issues
- Verify your API key is correct (starts with `sk-ant-api03-`)
- Check your Anthropic account has available credits
- Ensure the API key has the necessary permissions

## Alternative: Using Cline Extension

If you prefer a different interface, you can also use the **Cline** extension (`saoudrizwan.claude-dev`):

1. Install Cline extension
2. Open command palette (Ctrl+Shift+P / Cmd+Shift+P)
3. Run "Cline: Open"
4. Enter your Anthropic API key when prompted
5. Select "Claude 3.5 Sonnet" as your model

## Security Note

⚠️ **Important**: Never commit your API key to version control!

The configuration files in this repository have empty API key fields. Always add your API key locally and ensure it's not tracked by git.

## Support

- Continue Extension: https://github.com/continuedev/continue
- Anthropic API: https://docs.anthropic.com/
- Claude Models: https://www.anthropic.com/claude

## Repository Configuration

This repository is pre-configured with:
- ✅ VS Code settings optimized for C/C++ development
- ✅ Recommended extensions for Claude integration
- ✅ Continue configuration for Claude Sonnet
- ✅ Custom commands for common tasks

Just add your API key and start coding with AI assistance!
