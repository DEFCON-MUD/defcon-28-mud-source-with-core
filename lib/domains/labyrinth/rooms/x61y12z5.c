inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 12, 5 }));
  set_short( "Passage - x61y12z5" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "south" : DIR+"/rooms/x61y11z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
