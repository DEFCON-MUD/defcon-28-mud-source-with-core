inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 7 }));
  set_short( "Hallway - x19y37z7" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z7.c",
  "south" : DIR+"/rooms/x19y36z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
