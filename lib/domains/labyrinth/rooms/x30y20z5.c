inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 20, 5 }));
  set_short( "Hallway - x30y20z5" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y20z5.c",
  "east" : DIR+"/rooms/x31y20z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
