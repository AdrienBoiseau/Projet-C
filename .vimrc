"r General
	set nocompatible	" No compatible mode with Vi
	set background&		" Adapt colors to a dark or light background
	set backspace=2
	set history=100		" Keep 100 lines of command line history
	set ruler		" Show the cursor position
	set number
	set showcmd		" display incomplete commands
	set showmatch
	set ttyfast
	syntax on		" Syntax highlighting on
	set laststatus=2
	set statusline=%F%m\ %r\ %h\ %w\ [FORMAT=%{&ff}]\ [TYPE=%Y]\ [ASCII=\%04.8b]\ [HEX=\%04.4B]\ [POS=%04l,%04v][%p%%]\ [LEN=%L]

" Search
	set incsearch		" do incremental searching
	set hlsearch		" highlight all search matches
	set ignorecase		" Case insensitive
	set smartcase		
	set wrapscan		

" Indentation
	set preserveindent
	set shiftwidth=8
	set shiftround
	set tabstop=8
	set softtabstop=8
	set smarttab
	set noautoindent
	filetype plugin indent on
	filetype indent on

" Shortcuts
	" Sélectionner tout
	map <C-a> ggVG

