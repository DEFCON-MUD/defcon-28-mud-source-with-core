inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 4 }));
  set_short( "Passage - x5y16z4" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y17z4.c",
  "south" : DIR+"/rooms/x5y15z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
