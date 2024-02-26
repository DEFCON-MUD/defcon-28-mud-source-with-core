inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 7 }));
  set_short( "Hallway - x47y50z7" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y50z7.c",
  "south" : DIR+"/rooms/x47y49z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
