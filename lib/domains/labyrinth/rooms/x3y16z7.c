inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 7 }));
  set_short( "Passage - x3y16z7" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y17z7.c",
  "south" : DIR+"/rooms/x3y15z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
