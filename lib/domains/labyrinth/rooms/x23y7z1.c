inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 7, 1 }));
  set_short( "Corridor - x23y7z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y8z1.c",
  "south" : DIR+"/rooms/x23y6z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
