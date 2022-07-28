inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 6, 1 }));
  set_short( "Hallway - x22y6z1" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y6z1.c",
  "east" : DIR+"/rooms/x23y6z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
