inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 12, 6 }));
  set_short( "Corridor - x34y12z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y12z6.c",
  "east" : DIR+"/rooms/x35y12z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
