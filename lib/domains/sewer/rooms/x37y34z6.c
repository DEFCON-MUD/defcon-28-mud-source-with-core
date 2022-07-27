inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 6 }));
  set_short( "Corridor - x37y34z6" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y34z6.c",
  "south" : DIR+"/rooms/x37y33z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
