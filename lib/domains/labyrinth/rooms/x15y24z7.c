inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 7 }));
  set_short( "Hallway - x15y24z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y24z7.c",
  "east" : DIR+"/rooms/x16y24z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
