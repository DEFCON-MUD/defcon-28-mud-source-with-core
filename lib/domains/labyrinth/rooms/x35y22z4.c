inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 4 }));
  set_short( "Passage - x35y22z4" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y22z4.c",
  "south" : DIR+"/rooms/x35y21z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
