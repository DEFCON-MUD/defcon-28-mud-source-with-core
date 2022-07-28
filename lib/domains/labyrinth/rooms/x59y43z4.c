inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 4 }));
  set_short( "Passage - x59y43z4" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z4.c",
  "south" : DIR+"/rooms/x59y42z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
