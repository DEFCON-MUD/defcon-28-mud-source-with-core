inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 28, 1 }));
  set_short( "Passage - x61y28z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y28z1.c",
  "south" : DIR+"/rooms/x61y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
