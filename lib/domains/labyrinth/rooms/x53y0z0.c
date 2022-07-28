inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 0 }));
  set_short( "Hallway - x53y0z0" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z0.c",
  "east" : DIR+"/rooms/x54y0z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
