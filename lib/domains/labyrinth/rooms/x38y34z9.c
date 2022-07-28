inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 34, 9 }));
  set_short( "Hallway - x38y34z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y34z9.c",
  "east" : DIR+"/rooms/x39y34z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
