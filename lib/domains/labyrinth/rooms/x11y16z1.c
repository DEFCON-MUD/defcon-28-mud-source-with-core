inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 1 }));
  set_short( "Corridor - x11y16z1" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y17z1.c",
  "south" : DIR+"/rooms/x11y15z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
