inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 22, 0 }));
  set_short( "Passage - x34y22z0" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y22z0.c",
  "east" : DIR+"/rooms/x35y22z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
