inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 32, 9 }));
  set_short( "Corridor - x42y32z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y32z9.c",
  "east" : DIR+"/rooms/x43y32z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
