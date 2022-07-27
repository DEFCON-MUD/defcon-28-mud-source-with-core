inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 2, 6 }));
  set_short( "Corridor - x14y2z6" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y2z6.c",
  "east" : DIR+"/rooms/x15y2z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
