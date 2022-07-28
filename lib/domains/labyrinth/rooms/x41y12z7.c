inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 7 }));
  set_short( "Hallway - x41y12z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y12z7.c",
  "north" : DIR+"/rooms/x41y13z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
