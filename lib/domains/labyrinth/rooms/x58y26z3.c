inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 26, 3 }));
  set_short( "Hallway - x58y26z3" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y26z3.c",
  "east" : DIR+"/rooms/x59y26z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
