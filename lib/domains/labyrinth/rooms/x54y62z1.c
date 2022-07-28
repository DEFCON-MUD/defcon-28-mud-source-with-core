inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 62, 1 }));
  set_short( "Hallway - x54y62z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y62z1.c",
  "east" : DIR+"/rooms/x55y62z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
