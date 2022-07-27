inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 13, 1 }));
  set_short( "Passage - x53y13z1" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y14z1.c",
  "south" : DIR+"/rooms/x53y12z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
