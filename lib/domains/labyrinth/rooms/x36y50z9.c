inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 50, 9 }));
  set_short( "Hallway - x36y50z9" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y50z9.c",
  "east" : DIR+"/rooms/x37y50z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
