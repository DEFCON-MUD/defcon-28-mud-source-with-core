inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 15, 6 }));
  set_short( "Passage - x27y15z6" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y16z6.c",
  "south" : DIR+"/rooms/x27y14z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
