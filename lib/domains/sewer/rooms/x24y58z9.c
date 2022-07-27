inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 58, 9 }));
  set_short( "Hallway - x24y58z9" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y58z9.c",
  "east" : DIR+"/rooms/x25y58z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
