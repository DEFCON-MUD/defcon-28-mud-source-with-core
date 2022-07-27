inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 36, 8 }));
  set_short( "Corridor - x23y36z8" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y36z8.c",
  "north" : DIR+"/rooms/x23y37z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
