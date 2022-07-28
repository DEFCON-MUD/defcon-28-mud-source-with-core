inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 4, 8 }));
  set_short( "Hallway - x36y4z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y4z8.c",
  "east" : DIR+"/rooms/x37y4z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
