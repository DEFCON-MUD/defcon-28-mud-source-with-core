inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 8, 9 }));
  set_short( "Hallway - x42y8z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y8z9.c",
  "east" : DIR+"/rooms/x43y8z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
