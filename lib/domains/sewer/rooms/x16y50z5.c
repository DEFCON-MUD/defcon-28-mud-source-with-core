inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 50, 5 }));
  set_short( "Corridor - x16y50z5" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y50z5.c",
  "east" : DIR+"/rooms/x17y50z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
