/* dracula standard colors */
#define dracula_std_background "#282A36"
#define dracula_std_foreground "#F8F8F2"
#define dracula_std_selection  "#44475A"
#define dracula_std_comment    "#6272A4"
#define dracula_std_red        "#FF5555"
#define dracula_std_orange     "#FFB86C"
#define dracula_std_yellow     "#F1FA8C"
#define dracula_std_green      "#50FA7B"
#define dracula_std_purple     "#BD93F9"
#define dracula_std_cyan       "#8BE9FD"
#define dracula_std_pink       "#FF79C6"

/* dracula ansi colors */
#define dracula_ansi_black   "#21222C"
#define dracula_ansi_red     "#FF5555"
#define dracula_ansi_green   "#50FA7B"
#define dracula_ansi_yellow  "#F1FA8C"
#define dracula_ansi_blue    "#BD93F9"
#define dracula_ansi_magenta "#FF79C6"
#define dracula_ansi_cyan    "#8BE9FD"
#define dracula_ansi_white   "#F8F8F2"

/* dracula ansi bright colors */
#define dracula_ansi_bright_black   "#6272A4"
#define dracula_ansi_bright_red     "#FF6E6E"
#define dracula_ansi_bright_green   "#69FF94"
#define dracula_ansi_bright_yellow  "#FFFFA5"
#define dracula_ansi_bright_blue    "#D6ACFF"
#define dracula_ansi_bright_magenta "#FF92DF"
#define dracula_ansi_bright_cyan    "#A4FFFF"
#define dracula_ansi_bright_white   "#FFFFFF"

/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
    [INIT]   = dracula_std_background, /* after initialization */
    [INPUT]  = dracula_std_comment,    /* during input */
    [FAILED] = dracula_std_red,        /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
