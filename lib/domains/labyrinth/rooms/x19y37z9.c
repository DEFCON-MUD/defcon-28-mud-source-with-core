inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 9 }));
  set_short( "Corridor - x19y37z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z9.c",
  "south" : DIR+"/rooms/x19y36z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
