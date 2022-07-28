inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 8 }));
  set_short( "Passage - x3y16z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y16z8.c",
  "south" : DIR+"/rooms/x3y15z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
