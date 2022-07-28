inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 9 }));
  set_short( "Corridor - x33y24z9" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y24z9.c",
  "north" : DIR+"/rooms/x33y25z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
