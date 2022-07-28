inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 3 }));
  set_short( "Corridor - x55y6z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z3.c",
  "east" : DIR+"/rooms/x56y6z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
