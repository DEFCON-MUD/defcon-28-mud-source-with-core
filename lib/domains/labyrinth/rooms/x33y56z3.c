inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 56, 3 }));
  set_short( "Passage - x33y56z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y56z3.c",
  "east" : DIR+"/rooms/x34y56z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
