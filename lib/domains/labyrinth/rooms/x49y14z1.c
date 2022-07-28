inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 1 }));
  set_short( "Corridor - x49y14z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y15z1.c",
  "south" : DIR+"/rooms/x49y13z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
