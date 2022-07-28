inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 1 }));
  set_short( "Hallway - x59y54z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y54z1.c",
  "south" : DIR+"/rooms/x59y53z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
