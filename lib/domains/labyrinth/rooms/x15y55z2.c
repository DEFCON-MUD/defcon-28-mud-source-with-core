inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 55, 2 }));
  set_short( "Passage - x15y55z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y56z2.c",
  "south" : DIR+"/rooms/x15y54z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
