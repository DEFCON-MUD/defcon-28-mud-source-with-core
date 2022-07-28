inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 38, 7 }));
  set_short( "Corridor - x43y38z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y38z7.c",
  "north" : DIR+"/rooms/x43y39z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
