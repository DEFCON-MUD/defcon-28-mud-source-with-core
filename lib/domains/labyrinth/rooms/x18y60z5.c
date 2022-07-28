inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 60, 5 }));
  set_short( "Corridor - x18y60z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y60z5.c",
  "east" : DIR+"/rooms/x19y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
