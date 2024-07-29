inherit M_COMMAND;

string *usage(void) {
   string *lines;

   lines = ({ "Usage: set [-h] [VAR VALUE]" });
   lines += ({ " " });
   lines += ({ "Make changes to the settings for your account." });
   lines += ({ "If no VAR VALUE pair is given print your current settings."
      });
   lines += ({ "Some variables you can set:" });
   lines += ({ "\theight\t\theight of your screen.  " +
    "Set to 0 for max height, 1 for default height, or use custom value." });
   lines += ({ "\twidth\t\twidth of your screen." });
   lines += ({ "\tprompt\t\tYour prompt." });
   if (!query_guest(this_player()->query_name() ) ) {
      lines += ({ "\trealname\t\tYour real name." });
      lines += ({ "\email\t\tYour email address." });
      lines += ({ "\twww\t\tYour website." });
      lines += ({ "\tgender\t\tYour gender." });
      lines += ({ "\tautoload\tSet to 1 if you want to save your equipment " +
         "on quit." });
   }
      lines += ({ "\tstart\t\tyour starting room." });
      lines += ({ "\thidden\t\tSet to 1 if you want to hide your login from " +
         "users." });

      lines += ({ "\tsave_on_quit\tSet to 1 if you want to start where you " +
         "last quit." });
   if (query_wizard(this_player() ) ) {
      lines += ({ "\tquit_message\tSet your quit message.  " +
         "Example: $N $vquit." });
      lines += ({ "\tdebug_commands\tSet to 1 if you want debugging of " +
         "commands." });
      lines += ({ "\tverbose_errors\tSet to 1 if you want longer error " +
         "codes." });
      lines += ({ "\tdisplay_caught\tSet to 1 if you want to show caught " +
         "runtime errors." });
   }
   lines += ({ " " });
   lines += ({ "Options:" });
   lines += ({ "\t-h\tHelp, this usage message." });
   lines += ({ "Examples:" });
   lines += ({ "\tset width 50" });
   lines += ({ "\tset email foo@bar.com" });

   lines += get_alsos();

   return lines;
}

void setup_alsos() {
   add_also("player", "ansi");
   add_also("player", "wimpy");
}

void list_vars(void) {
  string name, *names;
  int i;

  names = ({ "height", "width", "prompt" });
  if (!query_guest(this_player()->query_name() ) ) {
    names += ({ "realname", "email", "website" });
  }
  if (this_player()->query_difficulty() >  0 || 
      query_wizard(this_player())) {
    names += ({ "autoload", "save_on_quit", "start_room"});
  }
  if (query_wizard(this_player() ) ) {
    names += ({ "hidden", 
         "quit_message", "debug_commands", "verbose_errors",
         "display_caught" });
  }
  for (i = 0; i < sizeof(names); i++) {
    out_unmod(names[i] + "=" + call_other(this_player(), "query_" +
         names[i]) + "\n");
  }
}

static void main(string str) {
   string name, value;
   object player;
   int i;

   if (!alsos) {
      setup_alsos();
   }

   player = this_player();

   if (empty_str(str)) {
      list_vars();
   } else if (sscanf(str, "-%s", str)) {
      player->more(usage());
      return;
   } else if ((sscanf(str, "%s %s", name, value) != 2) &&
      (sscanf(str, "%s=%s", name, value) != 2)) {
      player->more(usage());
      return;
   } else {
        if (value == "on") {
           value = "1";
        } else if (value == "off") {
           value = "0";
         }
        switch(name) {
           case "height": break;
           case "width": break;
           case "prompt": break;
           case "realname": break;
		   case "gender": break;
           case "email": break;
           case "website": break;
              if (query_guest(player->query_name() ) ) {
                 write("You must be logged in with a character.");
              return;
              }
              break;
           case "hidden":
            if (query_wizard(player) )  {
                 break;
              } else if (player->query_difficulty() > 0) {
               player->taint();
               return;
              } 
           case "autoload":
              if (query_wizard(this_player() ) )  {
                 break;
              } else if (this_player()->query_difficulty() > 0) {
                  player->taint();
                  return;
              } 
           case "save_on_quit":
              if (query_wizard(this_player() ) )  {
                 break;
              } else if (this_player()->query_difficulty() > 0) {
               player->taint();
                return;
              } 
           case "debug_commands":
              player->taint();
              if (query_wizard(this_player() ) )  {
                 break;
              } else if (this_player()->query_difficulty() > 0) {
               player->taint();
               return;
              }
           case "verbose_errors": break;
           case "display_caught":
              if (value != "0" && value != "1") {
                 write("The argument for " + name + " must be 1 or 0.");
                 return;
              }
           case "quit_message":
           case "start_room":
              if (query_wizard(this_player() ) )  {
                 break;
              } else if (this_player()->query_difficulty() > 0) {
               player->taint();
                return;
              }
           default:
              write("Invalid setting name \"" + name + "\".\n\n");
              this_player()->more(usage());
              return;
        } 
      write("Ok.");
      if (str2val(value) != -1) {                     
         /* We've got a value */
         call_other(this_player(), "set_" + name, str2val(value) );
      } else {
         call_other(this_player(), "set_" + name, value);
      }
   }
}
