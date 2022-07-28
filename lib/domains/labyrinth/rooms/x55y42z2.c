inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 2 }));
  set_short( "Hallway - x55y42z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z2.c",
  "south" : DIR+"/rooms/x55y41z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
