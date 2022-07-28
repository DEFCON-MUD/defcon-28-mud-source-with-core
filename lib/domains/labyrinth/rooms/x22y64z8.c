inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 8 }));
  set_short( "Corridor - x22y64z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z8.c",
  "east" : DIR+"/rooms/x23y64z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
