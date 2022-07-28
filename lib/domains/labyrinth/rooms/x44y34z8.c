inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 34, 8 }));
  set_short( "Hallway - x44y34z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y34z8.c",
  "east" : DIR+"/rooms/x45y34z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
