inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 1 }));
  set_short( "Passage - x23y22z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y22z1.c",
  "north" : DIR+"/rooms/x23y23z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
