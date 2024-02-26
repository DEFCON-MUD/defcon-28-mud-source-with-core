inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 29, 5 }));
  set_short( "Hallway - x49y29z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y30z5.c",
  "south" : DIR+"/rooms/x49y28z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
