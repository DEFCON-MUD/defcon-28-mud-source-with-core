inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 35, 8 }));
  set_short( "Hallway - x33y35z8" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y36z8.c",
  "south" : DIR+"/rooms/x33y34z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
