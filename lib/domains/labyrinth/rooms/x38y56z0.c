inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 56, 0 }));
  set_short( "Hallway - x38y56z0" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y56z0.c",
  "east" : DIR+"/rooms/x39y56z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
