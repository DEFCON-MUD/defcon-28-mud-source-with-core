inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 5 }));
  set_short( "Hallway - x13y14z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z5.c",
  "north" : DIR+"/rooms/x13y15z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
