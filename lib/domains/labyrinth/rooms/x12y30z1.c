inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 30, 1 }));
  set_short( "Corridor - x12y30z1" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y30z1.c",
  "east" : DIR+"/rooms/x13y30z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
