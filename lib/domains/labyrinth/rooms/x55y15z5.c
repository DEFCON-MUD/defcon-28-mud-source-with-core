inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 15, 5 }));
  set_short( "Hallway - x55y15z5" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y16z5.c",
  "south" : DIR+"/rooms/x55y14z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
