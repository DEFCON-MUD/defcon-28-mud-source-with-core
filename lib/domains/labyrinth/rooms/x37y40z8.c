inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 8 }));
  set_short( "Hallway - x37y40z8" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y40z8.c",
  "north" : DIR+"/rooms/x37y41z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
