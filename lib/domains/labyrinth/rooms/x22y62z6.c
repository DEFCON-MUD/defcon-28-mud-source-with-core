inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 62, 6 }));
  set_short( "Corridor - x22y62z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y62z6.c",
  "east" : DIR+"/rooms/x23y62z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
