inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 16, 8 }));
  set_short( "Hallway - x34y16z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y16z8.c",
  "east" : DIR+"/rooms/x35y16z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
