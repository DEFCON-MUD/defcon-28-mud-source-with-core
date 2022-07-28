inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 4 }));
  set_short( "Passage - x3y64z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z4.c",
  "east" : DIR+"/rooms/x4y64z4.c",
  "south" : DIR+"/rooms/x3y63z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
