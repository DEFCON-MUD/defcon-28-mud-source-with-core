inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 17, 5 }));
  set_short( "Corridor - x55y17z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y18z5.c",
  "south" : DIR+"/rooms/x55y16z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
