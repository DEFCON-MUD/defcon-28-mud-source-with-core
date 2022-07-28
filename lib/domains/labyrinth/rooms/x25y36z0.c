inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 0 }));
  set_short( "Corridor - x25y36z0" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y37z0.c",
  "south" : DIR+"/rooms/x25y35z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
