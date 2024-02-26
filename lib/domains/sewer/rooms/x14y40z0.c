inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 40, 0 }));
  set_short( "Hallway - x14y40z0" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y40z0.c",
  "east" : DIR+"/rooms/x15y40z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
