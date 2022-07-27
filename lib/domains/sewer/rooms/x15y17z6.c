inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 17, 6 }));
  set_short( "Corridor - x15y17z6" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y18z6.c",
  "south" : DIR+"/rooms/x15y16z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
