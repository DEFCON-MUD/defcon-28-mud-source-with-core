inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 46, 8 }));
  set_short( "Corridor - x59y46z8" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y46z8.c",
  "south" : DIR+"/rooms/x59y45z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
