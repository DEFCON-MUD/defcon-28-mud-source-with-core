inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 2 }));
  set_short( "Corridor - x49y2z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z2.c",
  "east" : DIR+"/rooms/x50y2z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
