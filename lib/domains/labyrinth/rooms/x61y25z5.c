inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 5 }));
  set_short( "Corridor - x61y25z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z5.c",
  "south" : DIR+"/rooms/x61y24z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
