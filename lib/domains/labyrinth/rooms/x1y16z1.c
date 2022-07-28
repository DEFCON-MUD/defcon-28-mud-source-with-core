inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 1 }));
  set_short( "Hallway - x1y16z1" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z1.c",
  "north" : DIR+"/rooms/x1y17z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
