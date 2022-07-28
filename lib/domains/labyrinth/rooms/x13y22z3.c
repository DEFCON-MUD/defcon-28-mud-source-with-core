inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 3 }));
  set_short( "Corridor - x13y22z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z3.c",
  "north" : DIR+"/rooms/x13y23z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
