inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 35, 4 }));
  set_short( "Corridor - x51y35z4" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y36z4.c",
  "south" : DIR+"/rooms/x51y34z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
