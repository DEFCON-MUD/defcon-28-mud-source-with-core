inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 3 }));
  set_short( "Hallway - x11y16z3" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y16z3.c",
  "north" : DIR+"/rooms/x11y17z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
