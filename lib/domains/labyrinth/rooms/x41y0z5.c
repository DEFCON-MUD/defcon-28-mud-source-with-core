inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 5 }));
  set_short( "Hallway - x41y0z5" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z5.c",
  "east" : DIR+"/rooms/x42y0z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
