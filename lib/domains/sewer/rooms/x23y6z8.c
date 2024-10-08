inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 8 }));
  set_short( "Hallway - x23y6z8" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z8.c",
  "east" : DIR+"/rooms/x24y6z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
