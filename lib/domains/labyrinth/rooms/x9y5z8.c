inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 5, 8 }));
  set_short( "Passage - x9y5z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y6z8.c",
  "south" : DIR+"/rooms/x9y4z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
