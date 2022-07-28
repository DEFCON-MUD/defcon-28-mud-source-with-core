inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 7 }));
  set_short( "Corridor - x19y48z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y48z7.c",
  "north" : DIR+"/rooms/x19y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
