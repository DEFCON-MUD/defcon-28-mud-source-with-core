inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 54, 3 }));
  set_short( "Passage - x28y54z3" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y54z3.c",
  "east" : DIR+"/rooms/x29y54z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
