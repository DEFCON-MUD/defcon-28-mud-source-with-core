inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 56, 7 }));
  set_short( "Passage - x8y56z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y56z7.c",
  "east" : DIR+"/rooms/x9y56z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
