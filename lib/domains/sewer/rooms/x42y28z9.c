inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 28, 9 }));
  set_short( "Corridor - x42y28z9" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y28z9.c",
  "east" : DIR+"/rooms/x43y28z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
