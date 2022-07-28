inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 2 }));
  set_short( "Hallway - x39y16z2" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y16z2.c",
  "north" : DIR+"/rooms/x39y17z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
