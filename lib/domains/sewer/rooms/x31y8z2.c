inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 2 }));
  set_short( "Corridor - x31y8z2" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y9z2.c",
  "south" : DIR+"/rooms/x31y7z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
