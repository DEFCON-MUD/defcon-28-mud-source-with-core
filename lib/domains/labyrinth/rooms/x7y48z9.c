inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 9 }));
  set_short( "Hallway - x7y48z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y48z9.c",
  "north" : DIR+"/rooms/x7y49z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
