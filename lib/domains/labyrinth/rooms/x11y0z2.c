inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 0, 2 }));
  set_short( "Hallway - x11y0z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y0z2.c",
  "east" : DIR+"/rooms/x12y0z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
