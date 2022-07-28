inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 2, 6 }));
  set_short( "Corridor - x42y2z6" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y2z6.c",
  "east" : DIR+"/rooms/x43y2z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
