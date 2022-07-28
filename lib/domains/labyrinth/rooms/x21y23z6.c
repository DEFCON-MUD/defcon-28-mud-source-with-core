inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 23, 6 }));
  set_short( "Hallway - x21y23z6" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y24z6.c",
  "south" : DIR+"/rooms/x21y22z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
