inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 0, 3 }));
  set_short( "Hallway - x54y0z3" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y0z3.c",
  "east" : DIR+"/rooms/x55y0z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
