inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 48, 2 }));
  set_short( "Passage - x48y48z2" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y48z2.c",
  "east" : DIR+"/rooms/x49y48z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
