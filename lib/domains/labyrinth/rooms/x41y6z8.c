inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 8 }));
  set_short( "Corridor - x41y6z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z8.c",
  "east" : DIR+"/rooms/x42y6z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
