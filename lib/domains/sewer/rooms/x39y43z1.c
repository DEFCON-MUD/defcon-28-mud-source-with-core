inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 1 }));
  set_short( "Corridor - x39y43z1" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z1.c",
  "south" : DIR+"/rooms/x39y42z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
