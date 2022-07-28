inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 8 }));
  set_short( "Hallway - x55y50z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y50z8.c",
  "east" : DIR+"/rooms/x56y50z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
