inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 5 }));
  set_short( "Passage - x55y50z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y50z5.c",
  "east" : DIR+"/rooms/x56y50z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
