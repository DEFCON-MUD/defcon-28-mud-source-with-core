inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 62, 8 }));
  set_short( "Passage - x22y62z8" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y62z8.c",
  "east" : DIR+"/rooms/x23y62z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
