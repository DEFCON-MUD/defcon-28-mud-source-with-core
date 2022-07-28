inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 29, 6 }));
  set_short( "Hallway - x33y29z6" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y30z6.c",
  "south" : DIR+"/rooms/x33y28z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
