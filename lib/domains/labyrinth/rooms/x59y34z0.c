inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 0 }));
  set_short( "Passage - x59y34z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y34z0.c",
  "south" : DIR+"/rooms/x59y33z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
