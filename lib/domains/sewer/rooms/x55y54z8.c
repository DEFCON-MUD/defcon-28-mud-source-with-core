inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 8 }));
  set_short( "Corridor - x55y54z8" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y54z8.c",
  "north" : DIR+"/rooms/x55y55z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
