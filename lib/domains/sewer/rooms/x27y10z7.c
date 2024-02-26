inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 7 }));
  set_short( "Hallway - x27y10z7" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y10z7.c",
  "east" : DIR+"/rooms/x28y10z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
