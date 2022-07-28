inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 5 }));
  set_short( "Corridor - x23y58z5" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y58z5.c",
  "north" : DIR+"/rooms/x23y59z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
