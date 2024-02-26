inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 40, 2 }));
  set_short( "Corridor - x31y40z2" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y40z2.c",
  "south" : DIR+"/rooms/x31y39z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
