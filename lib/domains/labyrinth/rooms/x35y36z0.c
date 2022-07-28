inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 0 }));
  set_short( "Corridor - x35y36z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z0.c",
  "north" : DIR+"/rooms/x35y37z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
