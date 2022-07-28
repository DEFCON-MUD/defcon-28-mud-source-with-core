inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 9 }));
  set_short( "Corridor - x57y28z9" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y28z9.c",
  "north" : DIR+"/rooms/x57y29z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
