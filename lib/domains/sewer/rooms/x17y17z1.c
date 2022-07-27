inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 17, 1 }));
  set_short( "Corridor - x17y17z1" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y18z1.c",
  "south" : DIR+"/rooms/x17y16z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
