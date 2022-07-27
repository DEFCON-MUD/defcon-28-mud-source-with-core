inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 12, 4 }));
  set_short( "Hallway - x34y12z4" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y12z4.c",
  "east" : DIR+"/rooms/x35y12z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
