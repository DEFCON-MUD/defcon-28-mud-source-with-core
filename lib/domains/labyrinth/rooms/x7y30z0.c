inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 0 }));
  set_short( "Hallway - x7y30z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y30z0.c",
  "east" : DIR+"/rooms/x8y30z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
