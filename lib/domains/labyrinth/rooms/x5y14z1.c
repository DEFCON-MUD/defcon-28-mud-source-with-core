inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 1 }));
  set_short( "Hallway - x5y14z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y14z1.c",
  "north" : DIR+"/rooms/x5y15z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
