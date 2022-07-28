inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 2 }));
  set_short( "Corridor - x37y52z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y52z2.c",
  "north" : DIR+"/rooms/x37y53z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
