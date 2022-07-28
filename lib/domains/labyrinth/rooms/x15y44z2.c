inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 2 }));
  set_short( "Passage - x15y44z2" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z2.c",
  "south" : DIR+"/rooms/x15y43z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
