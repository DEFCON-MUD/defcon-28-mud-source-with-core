inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 4, 8 }));
  set_short( "Passage - x16y4z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y4z8.c",
  "east" : DIR+"/rooms/x17y4z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
