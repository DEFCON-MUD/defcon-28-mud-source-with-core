inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 8 }));
  set_short( "Corridor - x9y8z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y8z8.c",
  "north" : DIR+"/rooms/x9y9z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
