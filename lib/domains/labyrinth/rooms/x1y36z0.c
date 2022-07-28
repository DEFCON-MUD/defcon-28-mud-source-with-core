inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 0 }));
  set_short( "Corridor - x1y36z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z0.c",
  "south" : DIR+"/rooms/x1y35z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
