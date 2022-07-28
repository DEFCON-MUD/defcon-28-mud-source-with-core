inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 22, 4 }));
  set_short( "Corridor - x54y22z4" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y22z4.c",
  "east" : DIR+"/rooms/x55y22z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
