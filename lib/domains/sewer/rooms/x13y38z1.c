inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 1 }));
  set_short( "Hallway - x13y38z1" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y38z1.c",
  "north" : DIR+"/rooms/x13y39z1.c",
  "south" : DIR+"/rooms/x13y37z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
