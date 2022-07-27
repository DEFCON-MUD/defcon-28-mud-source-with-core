inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 0 }));
  set_short( "Hallway - x27y40z0" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y41z0.c",
  "south" : DIR+"/rooms/x27y39z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
