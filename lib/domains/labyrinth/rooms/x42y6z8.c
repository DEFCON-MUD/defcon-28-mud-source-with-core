inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 8 }));
  set_short( "Hallway - x42y6z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z8.c",
  "east" : DIR+"/rooms/x43y6z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
