inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 41, 4 }));
  set_short( "Hallway - x33y41z4" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y42z4.c",
  "south" : DIR+"/rooms/x33y40z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
