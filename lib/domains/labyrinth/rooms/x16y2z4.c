inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 2, 4 }));
  set_short( "Corridor - x16y2z4" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y2z4.c",
  "east" : DIR+"/rooms/x17y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
