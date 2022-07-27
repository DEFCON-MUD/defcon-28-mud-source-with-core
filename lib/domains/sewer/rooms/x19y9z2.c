inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 9, 2 }));
  set_short( "Corridor - x19y9z2" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y10z2.c",
  "south" : DIR+"/rooms/x19y8z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
