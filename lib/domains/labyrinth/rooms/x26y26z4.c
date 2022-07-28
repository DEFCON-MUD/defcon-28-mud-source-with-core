inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 26, 4 }));
  set_short( "Passage - x26y26z4" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y26z4.c",
  "east" : DIR+"/rooms/x27y26z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
