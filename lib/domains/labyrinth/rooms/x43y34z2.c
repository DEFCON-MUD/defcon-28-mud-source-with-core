inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 2 }));
  set_short( "Passage - x43y34z2" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z2.c",
  "south" : DIR+"/rooms/x43y33z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
