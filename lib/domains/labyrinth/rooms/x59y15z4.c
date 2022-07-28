inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 4 }));
  set_short( "Corridor - x59y15z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z4.c",
  "south" : DIR+"/rooms/x59y14z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
