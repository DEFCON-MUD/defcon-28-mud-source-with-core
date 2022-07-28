inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 7 }));
  set_short( "Hallway - x21y25z7" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z7.c",
  "south" : DIR+"/rooms/x21y24z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
