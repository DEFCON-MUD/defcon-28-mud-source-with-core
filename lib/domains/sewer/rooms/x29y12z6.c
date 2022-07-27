inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 6 }));
  set_short( "Hallway - x29y12z6" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z6.c",
  "north" : DIR+"/rooms/x29y13z6.c",
  "south" : DIR+"/rooms/x29y11z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
