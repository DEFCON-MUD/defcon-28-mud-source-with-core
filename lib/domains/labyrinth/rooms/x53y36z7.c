inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 7 }));
  set_short( "Hallway - x53y36z7" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y36z7.c",
  "east" : DIR+"/rooms/x54y36z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
