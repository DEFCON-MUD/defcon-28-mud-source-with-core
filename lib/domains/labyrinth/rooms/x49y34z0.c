inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 0 }));
  set_short( "Hallway - x49y34z0" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y34z0.c",
  "north" : DIR+"/rooms/x49y35z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
