inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 10, 1 }));
  set_short( "Hallway - x54y10z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y10z1.c",
  "east" : DIR+"/rooms/x55y10z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
