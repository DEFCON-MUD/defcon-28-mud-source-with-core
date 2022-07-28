inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 8 }));
  set_short( "Passage - x5y14z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y14z8.c",
  "east" : DIR+"/rooms/x6y14z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
