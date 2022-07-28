inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 1 }));
  set_short( "Corridor - x33y46z1" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z1.c",
  "north" : DIR+"/rooms/x33y47z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
