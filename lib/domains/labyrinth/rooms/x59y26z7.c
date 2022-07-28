inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 7 }));
  set_short( "Corridor - x59y26z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y26z7.c",
  "south" : DIR+"/rooms/x59y25z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
