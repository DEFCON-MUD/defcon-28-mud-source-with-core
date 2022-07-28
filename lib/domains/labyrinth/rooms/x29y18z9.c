inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 9 }));
  set_short( "Corridor - x29y18z9" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y18z9.c",
  "north" : DIR+"/rooms/x29y19z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
