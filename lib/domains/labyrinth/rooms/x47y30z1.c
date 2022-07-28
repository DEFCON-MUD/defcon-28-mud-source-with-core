inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 30, 1 }));
  set_short( "Corridor - x47y30z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y30z1.c",
  "north" : DIR+"/rooms/x47y31z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
