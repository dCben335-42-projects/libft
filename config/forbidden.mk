ALLOWED_FUNC = readline|rl_clear_history|rl_on_new_line|rl_replace_line|rl_redisplay|add_history|printf|malloc|free|write|access|open|read|close|fork|wait|waitpid|wait3|wait4|signal|sigaction|sigemptyset|sigaddset|kill|exit|getcwd|chdir|stat|lstat|fstat|unlink|execve|dup|dup2|pipe|opendir|readdir|closedir|strerror|perror|isatty|ttyname|ttyslot|ioctl|getenv|tcsetattr|tcgetattr|tgetent|tgetflag|tgetnum|tgetstr|tgoto|tputs

forbid:
	@echo "Checking for forbidden functions:"
	@nm -u libft.a | egrep -v -w "$(ALLOWED_FUNC)" || true

.PHONY: forbid