inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 3 }));
  set_short( "Corridor - x4y48z3" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z3.c",
  "east" : DIR+"/rooms/x5y48z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
