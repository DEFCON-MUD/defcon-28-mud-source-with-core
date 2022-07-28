inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 9 }));
  set_short( "Hallway - x25y16z9" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z9.c",
  "north" : DIR+"/rooms/x25y17z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
