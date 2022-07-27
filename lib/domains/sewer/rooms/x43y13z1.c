inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 13, 1 }));
  set_short( "Passage - x43y13z1" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y14z1.c",
  "south" : DIR+"/rooms/x43y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
