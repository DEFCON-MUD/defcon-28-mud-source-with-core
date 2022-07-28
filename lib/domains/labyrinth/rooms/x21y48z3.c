inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 48, 3 }));
  set_short( "Hallway - x21y48z3" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y48z3.c",
  "north" : DIR+"/rooms/x21y49z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
