inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 5 }));
  set_short( "Corridor - x61y40z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y40z5.c",
  "south" : DIR+"/rooms/x61y39z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
