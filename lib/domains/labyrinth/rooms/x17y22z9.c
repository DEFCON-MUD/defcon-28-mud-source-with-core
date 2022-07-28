inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 9 }));
  set_short( "Passage - x17y22z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y22z9.c",
  "north" : DIR+"/rooms/x17y23z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
