inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 8 }));
  set_short( "Corridor - x3y30z8" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y30z8.c",
  "east" : DIR+"/rooms/x4y30z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
