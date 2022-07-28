inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 16, 5 }));
  set_short( "Corridor - x20y16z5" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y16z5.c",
  "east" : DIR+"/rooms/x21y16z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
