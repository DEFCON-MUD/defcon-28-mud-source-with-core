inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 42, 7 }));
  set_short( "Passage - x19y42z7" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y42z7.c",
  "south" : DIR+"/rooms/x19y41z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
