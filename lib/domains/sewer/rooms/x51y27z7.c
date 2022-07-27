inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 27, 7 }));
  set_short( "Corridor - x51y27z7" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y28z7.c",
  "south" : DIR+"/rooms/x51y26z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
