inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 3 }));
  set_short( "Hallway - x43y14z3" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y14z3.c",
  "east" : DIR+"/rooms/x44y14z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
