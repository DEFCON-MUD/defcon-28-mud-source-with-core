inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 28, 1 }));
  set_short( "Passage - x38y28z1" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y28z1.c",
  "east" : DIR+"/rooms/x39y28z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
