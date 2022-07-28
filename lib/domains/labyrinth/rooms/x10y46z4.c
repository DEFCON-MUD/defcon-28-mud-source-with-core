inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 46, 4 }));
  set_short( "Hallway - x10y46z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y46z4.c",
  "east" : DIR+"/rooms/x11y46z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
