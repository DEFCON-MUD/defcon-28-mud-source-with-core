inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 0 }));
  set_short( "Hallway - x7y42z0" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y43z0.c",
  "south" : DIR+"/rooms/x7y41z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
