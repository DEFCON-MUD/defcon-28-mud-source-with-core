inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 24, 3 }));
  set_short( "Hallway - x58y24z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y24z3.c",
  "east" : DIR+"/rooms/x59y24z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
