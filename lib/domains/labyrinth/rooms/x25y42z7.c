inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 7 }));
  set_short( "Corridor - x25y42z7" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y42z7.c",
  "east" : DIR+"/rooms/x26y42z7.c",
  "south" : DIR+"/rooms/x25y41z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
