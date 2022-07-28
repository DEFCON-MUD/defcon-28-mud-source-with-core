inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 48, 0 }));
  set_short( "Corridor - x27y48z0" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y49z0.c",
  "south" : DIR+"/rooms/x27y47z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
