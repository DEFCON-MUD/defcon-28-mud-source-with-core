inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 0 }));
  set_short( "Hallway - x49y2z0" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z0.c",
  "east" : DIR+"/rooms/x50y2z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
