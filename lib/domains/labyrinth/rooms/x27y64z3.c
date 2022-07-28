inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 3 }));
  set_short( "Hallway - x27y64z3" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z3.c",
  "east" : DIR+"/rooms/x28y64z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
