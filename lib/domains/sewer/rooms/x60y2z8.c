inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 8 }));
  set_short( "Corridor - x60y2z8" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z8.c",
  "east" : DIR+"/rooms/x61y2z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
