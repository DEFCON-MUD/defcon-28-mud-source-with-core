inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 5, 6 }));
  set_short( "Corridor - x57y5z6" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y6z6.c",
  "south" : DIR+"/rooms/x57y4z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
