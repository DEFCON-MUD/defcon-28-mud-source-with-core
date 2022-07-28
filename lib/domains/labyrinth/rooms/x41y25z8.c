inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 25, 8 }));
  set_short( "Passage - x41y25z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y26z8.c",
  "south" : DIR+"/rooms/x41y24z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
