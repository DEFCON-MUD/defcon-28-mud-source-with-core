inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 5 }));
  set_short( "Passage - x7y22z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y22z5.c",
  "south" : DIR+"/rooms/x7y21z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
