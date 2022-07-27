inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 47, 4 }));
  set_short( "Hallway - x33y47z4" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y48z4.c",
  "south" : DIR+"/rooms/x33y46z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
