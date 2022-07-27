inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 6 }));
  set_short( "Corridor - x51y12z6" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y12z6.c",
  "north" : DIR+"/rooms/x51y13z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
