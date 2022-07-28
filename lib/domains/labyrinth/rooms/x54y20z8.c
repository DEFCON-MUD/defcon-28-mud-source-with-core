inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 20, 8 }));
  set_short( "Hallway - x54y20z8" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y20z8.c",
  "east" : DIR+"/rooms/x55y20z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
