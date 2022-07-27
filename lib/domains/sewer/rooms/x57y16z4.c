inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 4 }));
  set_short( "Corridor - x57y16z4" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y16z4.c",
  "north" : DIR+"/rooms/x57y17z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
