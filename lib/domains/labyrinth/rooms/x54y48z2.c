inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 48, 2 }));
  set_short( "Passage - x54y48z2" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y48z2.c",
  "east" : DIR+"/rooms/x55y48z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
