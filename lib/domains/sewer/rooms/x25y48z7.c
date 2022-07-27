inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 7 }));
  set_short( "Hallway - x25y48z7" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y48z7.c",
  "north" : DIR+"/rooms/x25y49z7.c",
  "south" : DIR+"/rooms/x25y47z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
