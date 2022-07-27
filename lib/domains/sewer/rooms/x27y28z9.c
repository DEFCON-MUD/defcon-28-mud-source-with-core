inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 9 }));
  set_short( "Passage - x27y28z9" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y28z9.c",
  "south" : DIR+"/rooms/x27y27z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
