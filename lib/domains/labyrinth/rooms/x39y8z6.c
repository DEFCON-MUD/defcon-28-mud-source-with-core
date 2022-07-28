inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 6 }));
  set_short( "Corridor - x39y8z6" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y8z6.c",
  "north" : DIR+"/rooms/x39y9z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
