inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 48, 8 }));
  set_short( "Corridor - x2y48z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y48z8.c",
  "east" : DIR+"/rooms/x3y48z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
