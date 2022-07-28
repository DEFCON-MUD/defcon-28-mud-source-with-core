inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 7, 1 }));
  set_short( "Passage - x57y7z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y8z1.c",
  "south" : DIR+"/rooms/x57y6z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
