inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 2 }));
  set_short( "Corridor - x29y51z2" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z2.c",
  "south" : DIR+"/rooms/x29y50z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
