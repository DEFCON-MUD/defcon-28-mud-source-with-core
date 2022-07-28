inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 10, 6 }));
  set_short( "Passage - x35y10z6" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y10z6.c",
  "north" : DIR+"/rooms/x35y11z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
