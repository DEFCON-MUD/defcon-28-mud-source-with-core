inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 58, 5 }));
  set_short( "Hallway - x13y58z5" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y58z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
