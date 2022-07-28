inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 5 }));
  set_short( "Corridor - x22y48z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z5.c",
  "east" : DIR+"/rooms/x23y48z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
