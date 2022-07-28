inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 52, 0 }));
  set_short( "Corridor - x33y52z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y52z0.c",
  "east" : DIR+"/rooms/x34y52z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
