inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 2 }));
  set_short( "Hallway - x31y30z2" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z2.c",
  "north" : DIR+"/rooms/x31y31z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
