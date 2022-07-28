inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 5, 4 }));
  set_short( "Passage - x59y5z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y6z4.c",
  "south" : DIR+"/rooms/x59y4z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
