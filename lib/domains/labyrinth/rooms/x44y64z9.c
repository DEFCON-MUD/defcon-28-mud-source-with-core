inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 64, 9 }));
  set_short( "Corridor - x44y64z9" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y64z9.c",
  "east" : DIR+"/rooms/x45y64z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
