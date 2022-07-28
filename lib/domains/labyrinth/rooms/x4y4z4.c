inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 4, 4 }));
  set_short( "Corridor - x4y4z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y4z4.c",
  "east" : DIR+"/rooms/x5y4z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
