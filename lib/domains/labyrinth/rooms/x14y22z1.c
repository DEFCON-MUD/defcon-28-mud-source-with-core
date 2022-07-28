inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 22, 1 }));
  set_short( "Corridor - x14y22z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y22z1.c",
  "east" : DIR+"/rooms/x15y22z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
