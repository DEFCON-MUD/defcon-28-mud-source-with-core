inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 48, 9 }));
  set_short( "Corridor - x60y48z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y48z9.c",
  "east" : DIR+"/rooms/x61y48z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
