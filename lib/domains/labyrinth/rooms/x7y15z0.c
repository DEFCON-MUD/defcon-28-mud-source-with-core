inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 15, 0 }));
  set_short( "Passage - x7y15z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y16z0.c",
  "south" : DIR+"/rooms/x7y14z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
