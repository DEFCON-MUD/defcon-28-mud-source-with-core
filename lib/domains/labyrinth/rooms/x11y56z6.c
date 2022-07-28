inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 6 }));
  set_short( "Hallway - x11y56z6" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z6.c",
  "north" : DIR+"/rooms/x11y57z6.c",
  "south" : DIR+"/rooms/x11y55z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
