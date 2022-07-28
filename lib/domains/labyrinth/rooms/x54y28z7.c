inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 28, 7 }));
  set_short( "Hallway - x54y28z7" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y28z7.c",
  "east" : DIR+"/rooms/x55y28z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
