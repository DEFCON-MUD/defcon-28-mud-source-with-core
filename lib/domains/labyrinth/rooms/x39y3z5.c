inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 3, 5 }));
  set_short( "Passage - x39y3z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y4z5.c",
  "south" : DIR+"/rooms/x39y2z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
