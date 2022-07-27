inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 0 }));
  set_short( "Hallway - x43y48z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y48z0.c",
  "east" : DIR+"/rooms/x44y48z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
