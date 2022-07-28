inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 8 }));
  set_short( "Hallway - x21y54z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y54z8.c",
  "south" : DIR+"/rooms/x21y53z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
