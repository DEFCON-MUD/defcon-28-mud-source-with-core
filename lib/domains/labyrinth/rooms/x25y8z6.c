inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 6 }));
  set_short( "Corridor - x25y8z6" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y9z6.c",
  "south" : DIR+"/rooms/x25y7z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
