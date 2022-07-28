inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 0 }));
  set_short( "Hallway - x2y62z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z0.c",
  "east" : DIR+"/rooms/x3y62z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
