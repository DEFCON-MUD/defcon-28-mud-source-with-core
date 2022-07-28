inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 60, 5 }));
  set_short( "Hallway - x45y60z5" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y60z5.c",
  "east" : DIR+"/rooms/x46y60z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
