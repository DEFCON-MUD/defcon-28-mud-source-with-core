inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 8, 2 }));
  set_short( "Hallway - x8y8z2" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y8z2.c",
  "east" : DIR+"/rooms/x9y8z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
