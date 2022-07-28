inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 1 }));
  set_short( "Hallway - x35y20z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y20z1.c",
  "north" : DIR+"/rooms/x35y21z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
