inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 44, 1 }));
  set_short( "Passage - x10y44z1" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y44z1.c",
  "east" : DIR+"/rooms/x11y44z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
