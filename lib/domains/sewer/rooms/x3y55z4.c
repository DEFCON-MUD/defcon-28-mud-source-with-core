inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 4 }));
  set_short( "Hallway - x3y55z4" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z4.c",
  "south" : DIR+"/rooms/x3y54z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
