inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 64, 9 }));
  set_short( "Corridor - x54y64z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y64z9.c",
  "east" : DIR+"/rooms/x55y64z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
