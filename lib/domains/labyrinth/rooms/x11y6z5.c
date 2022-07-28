inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 5 }));
  set_short( "Corridor - x11y6z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y6z5.c",
  "north" : DIR+"/rooms/x11y7z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
