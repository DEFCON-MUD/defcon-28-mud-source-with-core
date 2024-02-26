inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 5 }));
  set_short( "Corridor - x30y40z5" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z5.c",
  "east" : DIR+"/rooms/x31y40z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
