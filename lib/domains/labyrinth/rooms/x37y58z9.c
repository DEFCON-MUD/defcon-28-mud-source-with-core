inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 58, 9 }));
  set_short( "Corridor - x37y58z9" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y58z9.c",
  "north" : DIR+"/rooms/x37y59z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
