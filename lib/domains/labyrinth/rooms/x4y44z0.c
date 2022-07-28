inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 44, 0 }));
  set_short( "Passage - x4y44z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y44z0.c",
  "east" : DIR+"/rooms/x5y44z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
