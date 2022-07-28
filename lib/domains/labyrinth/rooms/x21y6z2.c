inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 2 }));
  set_short( "Corridor - x21y6z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y6z2.c",
  "north" : DIR+"/rooms/x21y7z2.c",
  "south" : DIR+"/rooms/x21y5z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
