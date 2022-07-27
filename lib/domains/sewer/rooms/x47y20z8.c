inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 8 }));
  set_short( "Hallway - x47y20z8" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y20z8.c",
  "east" : DIR+"/rooms/x48y20z8.c",
  "north" : DIR+"/rooms/x47y21z8.c",
  "south" : DIR+"/rooms/x47y19z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
