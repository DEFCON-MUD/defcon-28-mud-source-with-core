inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 7 }));
  set_short( "Corridor - x25y0z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z7.c",
  "east" : DIR+"/rooms/x26y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
