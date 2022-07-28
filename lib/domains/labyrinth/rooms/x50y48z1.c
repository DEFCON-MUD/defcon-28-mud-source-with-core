inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 1 }));
  set_short( "Hallway - x50y48z1" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z1.c",
  "east" : DIR+"/rooms/x51y48z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
