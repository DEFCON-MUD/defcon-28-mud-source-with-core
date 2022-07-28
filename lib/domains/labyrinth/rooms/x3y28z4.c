inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 28, 4 }));
  set_short( "Passage - x3y28z4" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y28z4.c",
  "south" : DIR+"/rooms/x3y27z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
