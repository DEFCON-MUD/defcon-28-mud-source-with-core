inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 3, 7 }));
  set_short( "Corridor - x27y3z7" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y4z7.c",
  "south" : DIR+"/rooms/x27y2z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
