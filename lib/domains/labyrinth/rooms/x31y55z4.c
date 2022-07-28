inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 55, 4 }));
  set_short( "Hallway - x31y55z4" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y56z4.c",
  "south" : DIR+"/rooms/x31y54z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
