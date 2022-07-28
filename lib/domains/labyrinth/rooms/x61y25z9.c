inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 25, 9 }));
  set_short( "Hallway - x61y25z9" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y26z9.c",
  "south" : DIR+"/rooms/x61y24z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
