inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 0 }));
  set_short( "Hallway - x58y0z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z0.c",
  "east" : DIR+"/rooms/x59y0z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
