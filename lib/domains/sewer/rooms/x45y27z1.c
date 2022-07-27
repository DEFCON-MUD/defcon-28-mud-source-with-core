inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 27, 1 }));
  set_short( "Passage - x45y27z1" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y28z1.c",
  "south" : DIR+"/rooms/x45y26z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
