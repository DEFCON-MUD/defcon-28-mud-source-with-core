inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 29, 2 }));
  set_short( "Passage - x1y29z2" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y30z2.c",
  "south" : DIR+"/rooms/x1y28z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
