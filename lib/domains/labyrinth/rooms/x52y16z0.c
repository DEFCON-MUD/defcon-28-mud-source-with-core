inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 16, 0 }));
  set_short( "Passage - x52y16z0" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y16z0.c",
  "east" : DIR+"/rooms/x53y16z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
