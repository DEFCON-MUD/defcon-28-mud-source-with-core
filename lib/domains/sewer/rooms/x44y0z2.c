inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 2 }));
  set_short( "Corridor - x44y0z2" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z2.c",
  "east" : DIR+"/rooms/x45y0z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
