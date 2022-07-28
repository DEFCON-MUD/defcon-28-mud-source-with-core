inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 3 }));
  set_short( "Hallway - x41y42z3" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y43z3.c",
  "south" : DIR+"/rooms/x41y41z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
