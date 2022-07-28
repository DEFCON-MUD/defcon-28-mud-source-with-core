inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 14, 0 }));
  set_short( "Corridor - x20y14z0" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y14z0.c",
  "east" : DIR+"/rooms/x21y14z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
