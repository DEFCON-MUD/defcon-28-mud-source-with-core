inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 35, 1 }));
  set_short( "Passage - x55y35z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y36z1.c",
  "south" : DIR+"/rooms/x55y34z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
