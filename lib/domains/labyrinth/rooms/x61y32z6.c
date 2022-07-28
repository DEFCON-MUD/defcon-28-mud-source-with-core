inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 6 }));
  set_short( "Corridor - x61y32z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y32z6.c",
  "south" : DIR+"/rooms/x61y31z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
