inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 32, 4 }));
  set_short( "Corridor - x6y32z4" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y32z4.c",
  "east" : DIR+"/rooms/x7y32z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
