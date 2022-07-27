inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 9 }));
  set_short( "Corridor - x15y50z9" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y50z9.c",
  "north" : DIR+"/rooms/x15y51z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
