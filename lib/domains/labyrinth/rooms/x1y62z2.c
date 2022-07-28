inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 2 }));
  set_short( "Passage - x1y62z2" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z2.c",
  "south" : DIR+"/rooms/x1y61z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
