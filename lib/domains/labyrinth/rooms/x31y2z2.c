inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 2, 2 }));
  set_short( "Hallway - x31y2z2" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y2z2.c",
  "north" : DIR+"/rooms/x31y3z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
