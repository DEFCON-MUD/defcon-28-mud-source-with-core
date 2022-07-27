inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 6, 5 }));
  set_short( "Corridor - x13y6z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y6z5.c",
  "north" : DIR+"/rooms/x13y7z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
