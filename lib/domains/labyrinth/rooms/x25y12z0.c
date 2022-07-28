inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 0 }));
  set_short( "Corridor - x25y12z0" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y13z0.c",
  "south" : DIR+"/rooms/x25y11z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
