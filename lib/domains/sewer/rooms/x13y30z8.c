inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 8 }));
  set_short( "Corridor - x13y30z8" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y30z8.c",
  "south" : DIR+"/rooms/x13y29z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
