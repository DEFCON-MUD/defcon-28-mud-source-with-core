inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 2 }));
  set_short( "Hallway - x24y46z2" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z2.c",
  "east" : DIR+"/rooms/x25y46z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
