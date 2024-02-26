inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 27, 0 }));
  set_short( "Corridor - x19y27z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y28z0.c",
  "south" : DIR+"/rooms/x19y26z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
