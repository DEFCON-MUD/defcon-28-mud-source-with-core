inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 1 }));
  set_short( "Corridor - x33y14z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y14z1.c",
  "east" : DIR+"/rooms/x34y14z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
