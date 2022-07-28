inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 1 }));
  set_short( "Hallway - x59y64z1" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z1.c",
  "east" : DIR+"/rooms/x60y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
