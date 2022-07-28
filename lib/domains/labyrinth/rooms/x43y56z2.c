inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 2 }));
  set_short( "Corridor - x43y56z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y56z2.c",
  "east" : DIR+"/rooms/x44y56z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
