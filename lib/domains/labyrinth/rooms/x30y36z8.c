inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 36, 8 }));
  set_short( "Passage - x30y36z8" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y36z8.c",
  "east" : DIR+"/rooms/x31y36z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
