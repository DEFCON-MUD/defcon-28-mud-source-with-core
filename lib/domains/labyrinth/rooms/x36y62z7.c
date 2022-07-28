inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 62, 7 }));
  set_short( "Hallway - x36y62z7" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y62z7.c",
  "east" : DIR+"/rooms/x37y62z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
