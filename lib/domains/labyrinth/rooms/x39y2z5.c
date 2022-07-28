inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 5 }));
  set_short( "Corridor - x39y2z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y2z5.c",
  "north" : DIR+"/rooms/x39y3z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
