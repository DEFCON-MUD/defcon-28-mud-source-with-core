inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 3 }));
  set_short( "Hallway - x15y34z3" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y34z3.c",
  "south" : DIR+"/rooms/x15y33z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
