inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 4 }));
  set_short( "Hallway - x29y48z4" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y48z4.c",
  "east" : DIR+"/rooms/x30y48z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
