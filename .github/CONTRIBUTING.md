# Contribution Rules

Thanks for your interest in contributing to this free open source project! Please take the time to read and follow these rules before submitting an issue report or pull request.

## Issues

- Do you need help using this project? Support requests should be made to the appropriate section of the [Arduino forum](http://forum.arduino.cc) rather than an issue report. Feel free to [send me a PM](https://forum.arduino.cc/u/pert) with a link to your forum thread. **Support will not be provided via PM**, I prefer to help you publicly so that others with the same question may benefit from the information. **Issue reports are to be used to report bugs or make feature requests only.**
- Before submitting a bug report test using the [latest version of the project](https://github.com/Youngv/ESP32MouseTo/archive/master.zip) to be sure it hasn't already been fixed. **Don't report issues that only occur with old versions of the project.**
- Search [existing pull requests and issues](https://github.com/Youngv/ESP32MouseTo/issues?q=) to be sure it hasn't already been reported. **Do not submit duplicate issue reports.** If you have additional information to provide about the issue then please comment on that issue.
- Open an issue at https://github.com/Youngv/ESP32MouseTo/issues/new.
- State which version of the Arduino IDE you are using. I do try to maintain backwards compatibility with old versions of the Arduino IDE.
- State which board you have selected in the **Tools > Board** menu.
- Describe the issue and what behavior you were expecting. Post complete error messages using [markdown code fencing](https://guides.github.com/features/mastering-markdown/#examples).
- Provide a full set of steps necessary to reproduce the issue. Demonstration code should be complete, correct and simplified to the minimum amount of code necessary to reproduce the issue. Please use [markdown code fencing](https://guides.github.com/features/mastering-markdown/#examples) when posting code.
- Be responsive. I may need you to provide more information, please respond as soon as possible.
- If you find a solution to your problem update your issue report with an explanation of how you were able to fix it and close the issue.

## Pull Requests

- Search [existing pull requests and issues](https://github.com/Youngv/ESP32MouseTo/pulls?q=) to make sure the change hasn't already been proposed.
- Comment your code. The focus of Arduino is learning so it's best to be a bit more thorough about documenting code.
- Code must be formatted according to the latest version of the Arduino IDE's **Tools > Auto Format**. If you don't have the Arduino IDE installed you can use [Artistic Style](http://astyle.sourceforge.net) configured according to https://github.com/arduino/Arduino/blob/master/build/shared/lib/formatter.conf. All other formatting should be consistent with the current code.
- If appropriate, add or update tests in the [.travis.yml file](https://github.com/Youngv/WatchdogLog/blob/master/.travis.yml).
- Update the [documentation](https://github.com/Youngv/ESP32MouseTo/blob/master/README.md) if your changes require it. This should be done in the same commit as the change.
- **All commits must be atomic**. This means that the commit completely accomplishes a single task. Each commit should result in fully functional code. Multiple tasks should not be combined in a single commit. For more information please read http://www.freshconsulting.com/atomic-commits.
- Commit messages: Use the [imperative mood](http://chris.beams.io/posts/git-commit/#imperative) in the commit title. Completely explain the purpose of the commit. Please read http://chris.beams.io/posts/git-commit for more tips on writing good commit messages.
- Each pull request should address a single bug fix or enhancement, this may consist of multiple commits. If you have multiple, unrelated fixes or enhancements to contribute, then do each in a separate pull request.
- Open a pull request at https://github.com/Youngv/ESP32MouseTo/compare.
- If your pull request fixes an issue in the issue tracker, use the [closes/fixes/resolves syntax](https://help.github.com/articles/closing-issues-via-commit-messages) in the body to denote this.
