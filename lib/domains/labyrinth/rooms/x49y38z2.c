inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 38, 2 }));
  set_short( "Passage - x49y38z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y38z2.c",
  "north" : DIR+"/rooms/x49y39z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
