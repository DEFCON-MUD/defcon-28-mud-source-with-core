inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 6 }));
  set_short( "Corridor - x45y54z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y54z6.c",
  "north" : DIR+"/rooms/x45y55z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
