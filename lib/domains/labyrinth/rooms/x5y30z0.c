inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 30, 0 }));
  set_short( "Hallway - x5y30z0" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y30z0.c",
  "south" : DIR+"/rooms/x5y29z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
