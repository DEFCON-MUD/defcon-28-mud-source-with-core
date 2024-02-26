inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 6 }));
  set_short( "Passage - x7y30z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y30z6.c",
  "north" : DIR+"/rooms/x7y31z6.c",
  "south" : DIR+"/rooms/x7y29z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
