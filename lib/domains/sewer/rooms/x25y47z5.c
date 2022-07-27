inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 5 }));
  set_short( "Hallway - x25y47z5" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z5.c",
  "south" : DIR+"/rooms/x25y46z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
