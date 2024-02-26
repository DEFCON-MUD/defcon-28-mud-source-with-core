inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 1 }));
  set_short( "Corridor - x13y14z1" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z1.c",
  "north" : DIR+"/rooms/x13y15z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
