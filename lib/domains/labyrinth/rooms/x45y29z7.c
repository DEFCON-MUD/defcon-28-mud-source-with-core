inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 29, 7 }));
  set_short( "Hallway - x45y29z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y30z7.c",
  "south" : DIR+"/rooms/x45y28z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
