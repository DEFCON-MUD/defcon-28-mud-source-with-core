inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 62, 64, 1 }));
  set_short( "Hallway - x62y64z1" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x61y64z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
