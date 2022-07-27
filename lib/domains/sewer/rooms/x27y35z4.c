inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 4 }));
  set_short( "Hallway - x27y35z4" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z4.c",
  "south" : DIR+"/rooms/x27y34z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
