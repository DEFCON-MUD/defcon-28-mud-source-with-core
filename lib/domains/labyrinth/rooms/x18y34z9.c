inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 34, 9 }));
  set_short( "Hallway - x18y34z9" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y34z9.c",
  "east" : DIR+"/rooms/x19y34z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
