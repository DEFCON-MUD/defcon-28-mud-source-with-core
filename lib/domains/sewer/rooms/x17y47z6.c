inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 47, 6 }));
  set_short( "Corridor - x17y47z6" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y48z6.c",
  "south" : DIR+"/rooms/x17y46z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
