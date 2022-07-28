inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 56, 7 }));
  set_short( "Hallway - x26y56z7" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y56z7.c",
  "east" : DIR+"/rooms/x27y56z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
