inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 47, 0 }));
  set_short( "Corridor - x55y47z0" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y48z0.c",
  "south" : DIR+"/rooms/x55y46z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
