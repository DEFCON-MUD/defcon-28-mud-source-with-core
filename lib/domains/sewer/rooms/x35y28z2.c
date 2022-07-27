inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 2 }));
  set_short( "Corridor - x35y28z2" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y28z2.c",
  "south" : DIR+"/rooms/x35y27z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
