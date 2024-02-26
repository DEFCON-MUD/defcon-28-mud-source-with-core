inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 52, 2 }));
  set_short( "Hallway - x60y52z2" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y52z2.c",
  "east" : DIR+"/rooms/x61y52z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
