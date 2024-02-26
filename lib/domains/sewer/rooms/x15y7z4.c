inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 4 }));
  set_short( "Hallway - x15y7z4" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z4.c",
  "south" : DIR+"/rooms/x15y6z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
