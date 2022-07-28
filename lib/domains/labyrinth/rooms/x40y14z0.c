inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 14, 0 }));
  set_short( "Corridor - x40y14z0" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y14z0.c",
  "east" : DIR+"/rooms/x41y14z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
