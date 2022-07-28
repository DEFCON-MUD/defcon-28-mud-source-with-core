inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 7, 1 }));
  set_short( "Passage - x55y7z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y8z1.c",
  "south" : DIR+"/rooms/x55y6z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
