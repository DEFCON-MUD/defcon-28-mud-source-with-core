inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 24, 2 }));
  set_short( "Hallway - x13y24z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y24z2.c",
  "north" : DIR+"/rooms/x13y25z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
