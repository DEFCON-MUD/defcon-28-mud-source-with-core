inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 2 }));
  set_short( "Corridor - x31y50z2" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y50z2.c",
  "east" : DIR+"/rooms/x32y50z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
