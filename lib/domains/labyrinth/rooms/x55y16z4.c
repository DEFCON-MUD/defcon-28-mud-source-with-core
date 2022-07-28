inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 4 }));
  set_short( "Corridor - x55y16z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y16z4.c",
  "north" : DIR+"/rooms/x55y17z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
