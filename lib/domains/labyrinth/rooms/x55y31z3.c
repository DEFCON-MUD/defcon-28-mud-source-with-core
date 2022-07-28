inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 3 }));
  set_short( "Passage - x55y31z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z3.c",
  "south" : DIR+"/rooms/x55y30z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
