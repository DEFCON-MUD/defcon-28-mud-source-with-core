inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 7 }));
  set_short( "Corridor - x3y56z7" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y57z7.c",
  "south" : DIR+"/rooms/x3y55z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
