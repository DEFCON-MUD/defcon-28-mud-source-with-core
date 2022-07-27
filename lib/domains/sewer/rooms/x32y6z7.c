inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 6, 7 }));
  set_short( "Hallway - x32y6z7" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y6z7.c",
  "east" : DIR+"/rooms/x33y6z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
