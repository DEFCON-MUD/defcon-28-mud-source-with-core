inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 27, 4 }));
  set_short( "Hallway - x7y27z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y28z4.c",
  "south" : DIR+"/rooms/x7y26z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
