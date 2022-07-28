inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 7 }));
  set_short( "Corridor - x3y36z7" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z7.c",
  "south" : DIR+"/rooms/x3y35z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
