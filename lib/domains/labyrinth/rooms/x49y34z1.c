inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 1 }));
  set_short( "Passage - x49y34z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z1.c",
  "north" : DIR+"/rooms/x49y35z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
