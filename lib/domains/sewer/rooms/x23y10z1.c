inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 1 }));
  set_short( "Passage - x23y10z1" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y10z1.c",
  "south" : DIR+"/rooms/x23y9z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
