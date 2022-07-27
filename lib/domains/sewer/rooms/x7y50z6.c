inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 50, 6 }));
  set_short( "Corridor - x7y50z6" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y50z6.c",
  "north" : DIR+"/rooms/x7y51z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
