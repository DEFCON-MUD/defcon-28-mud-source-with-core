inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 25, 6 }));
  set_short( "Corridor - x19y25z6" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y26z6.c",
  "south" : DIR+"/rooms/x19y24z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
