inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 7 }));
  set_short( "Hallway - x51y60z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y60z7.c",
  "north" : DIR+"/rooms/x51y61z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
