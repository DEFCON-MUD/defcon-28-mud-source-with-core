inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 60, 0 }));
  set_short( "Corridor - x53y60z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y60z0.c",
  "south" : DIR+"/rooms/x53y59z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
