inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 14, 8 }));
  set_short( "Passage - x18y14z8" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y14z8.c",
  "east" : DIR+"/rooms/x19y14z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
