inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 1, 7 }));
  set_short( "Hallway - x47y1z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y2z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
