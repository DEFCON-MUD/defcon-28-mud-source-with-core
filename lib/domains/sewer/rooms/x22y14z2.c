inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 2 }));
  set_short( "Corridor - x22y14z2" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z2.c",
  "east" : DIR+"/rooms/x23y14z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
