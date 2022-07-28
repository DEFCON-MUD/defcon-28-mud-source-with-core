inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 4 }));
  set_short( "Corridor - x3y38z4" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y38z4.c",
  "south" : DIR+"/rooms/x3y37z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
