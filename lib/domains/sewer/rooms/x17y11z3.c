inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 11, 3 }));
  set_short( "Passage - x17y11z3" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y12z3.c",
  "south" : DIR+"/rooms/x17y10z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
