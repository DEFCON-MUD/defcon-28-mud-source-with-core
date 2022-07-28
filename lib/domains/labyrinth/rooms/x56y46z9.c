inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 46, 9 }));
  set_short( "Corridor - x56y46z9" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y46z9.c",
  "east" : DIR+"/rooms/x57y46z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
