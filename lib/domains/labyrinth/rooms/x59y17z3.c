inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 17, 3 }));
  set_short( "Hallway - x59y17z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y18z3.c",
  "south" : DIR+"/rooms/x59y16z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
