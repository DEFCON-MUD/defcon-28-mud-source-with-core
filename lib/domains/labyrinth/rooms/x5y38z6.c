inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 6 }));
  set_short( "Passage - x5y38z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z6.c",
  "south" : DIR+"/rooms/x5y37z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
