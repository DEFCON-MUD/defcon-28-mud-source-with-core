inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 5 }));
  set_short( "Corridor - x49y45z5" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z5.c",
  "south" : DIR+"/rooms/x49y44z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
