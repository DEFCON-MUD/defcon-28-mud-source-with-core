inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 43, 9 }));
  set_short( "Hallway - x49y43z9" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y44z9.c",
  "south" : DIR+"/rooms/x49y42z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
