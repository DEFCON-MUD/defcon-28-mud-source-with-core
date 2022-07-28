inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 1 }));
  set_short( "Passage - x43y8z1" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y8z1.c",
  "north" : DIR+"/rooms/x43y9z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
