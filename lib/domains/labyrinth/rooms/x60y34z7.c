inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 34, 7 }));
  set_short( "Hallway - x60y34z7" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y34z7.c",
  "east" : DIR+"/rooms/x61y34z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
