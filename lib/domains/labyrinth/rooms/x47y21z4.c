inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 21, 4 }));
  set_short( "Hallway - x47y21z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y22z4.c",
  "south" : DIR+"/rooms/x47y20z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
