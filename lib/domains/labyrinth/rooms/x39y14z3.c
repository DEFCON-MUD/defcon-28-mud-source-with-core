inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 3 }));
  set_short( "Passage - x39y14z3" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y14z3.c",
  "north" : DIR+"/rooms/x39y15z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
