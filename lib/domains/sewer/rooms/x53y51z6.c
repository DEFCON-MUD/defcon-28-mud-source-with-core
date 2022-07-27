inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 51, 6 }));
  set_short( "Passage - x53y51z6" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y52z6.c",
  "south" : DIR+"/rooms/x53y50z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
