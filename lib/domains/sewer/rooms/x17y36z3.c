inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 36, 3 }));
  set_short( "Hallway - x17y36z3" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y37z3.c",
  "south" : DIR+"/rooms/x17y35z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
