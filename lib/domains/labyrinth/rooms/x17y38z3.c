inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 3 }));
  set_short( "Corridor - x17y38z3" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y39z3.c",
  "south" : DIR+"/rooms/x17y37z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
