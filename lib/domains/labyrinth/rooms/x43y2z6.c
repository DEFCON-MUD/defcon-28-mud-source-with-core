inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 6 }));
  set_short( "Hallway - x43y2z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y2z6.c",
  "north" : DIR+"/rooms/x43y3z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
