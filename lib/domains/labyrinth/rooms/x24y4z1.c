inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 4, 1 }));
  set_short( "Hallway - x24y4z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y4z1.c",
  "east" : DIR+"/rooms/x25y4z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
