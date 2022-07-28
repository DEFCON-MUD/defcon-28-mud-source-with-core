inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 62, 4 }));
  set_short( "Passage - x20y62z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y62z4.c",
  "east" : DIR+"/rooms/x21y62z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
