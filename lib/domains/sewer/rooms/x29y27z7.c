inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 7 }));
  set_short( "Corridor - x29y27z7" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z7.c",
  "south" : DIR+"/rooms/x29y26z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
