inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 60, 2 }));
  set_short( "Corridor - x18y60z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y60z2.c",
  "east" : DIR+"/rooms/x19y60z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
