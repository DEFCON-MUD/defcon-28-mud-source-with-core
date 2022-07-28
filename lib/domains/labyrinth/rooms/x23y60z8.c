inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 8 }));
  set_short( "Corridor - x23y60z8" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y60z8.c",
  "east" : DIR+"/rooms/x24y60z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
