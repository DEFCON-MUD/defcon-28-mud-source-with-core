inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 9 }));
  set_short( "Hallway - x25y24z9" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y24z9.c",
  "north" : DIR+"/rooms/x25y25z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
