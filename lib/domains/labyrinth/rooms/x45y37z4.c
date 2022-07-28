inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 37, 4 }));
  set_short( "Hallway - x45y37z4" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y38z4.c",
  "south" : DIR+"/rooms/x45y36z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
