inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 1 }));
  set_short( "Corridor - x39y28z1" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y28z1.c",
  "east" : DIR+"/rooms/x40y28z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
