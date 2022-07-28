inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 4 }));
  set_short( "Hallway - x59y44z4" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y45z4.c",
  "south" : DIR+"/rooms/x59y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
