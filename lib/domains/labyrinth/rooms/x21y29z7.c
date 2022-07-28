inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 7 }));
  set_short( "Passage - x21y29z7" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z7.c",
  "south" : DIR+"/rooms/x21y28z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
