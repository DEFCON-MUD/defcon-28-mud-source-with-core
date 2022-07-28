inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 7 }));
  set_short( "Passage - x44y62z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z7.c",
  "east" : DIR+"/rooms/x45y62z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
