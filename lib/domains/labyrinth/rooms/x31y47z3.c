inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 47, 3 }));
  set_short( "Hallway - x31y47z3" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y48z3.c",
  "south" : DIR+"/rooms/x31y46z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
