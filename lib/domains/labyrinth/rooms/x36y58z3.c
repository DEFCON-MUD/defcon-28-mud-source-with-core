inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 3 }));
  set_short( "Corridor - x36y58z3" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z3.c",
  "east" : DIR+"/rooms/x37y58z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
