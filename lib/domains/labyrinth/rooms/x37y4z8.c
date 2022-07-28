inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 4, 8 }));
  set_short( "Passage - x37y4z8" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y4z8.c",
  "east" : DIR+"/rooms/x38y4z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
