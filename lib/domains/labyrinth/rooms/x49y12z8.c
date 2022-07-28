inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 8 }));
  set_short( "Hallway - x49y12z8" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y12z8.c",
  "south" : DIR+"/rooms/x49y11z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
