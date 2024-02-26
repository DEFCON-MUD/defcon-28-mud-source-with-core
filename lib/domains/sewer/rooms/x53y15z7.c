inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 15, 7 }));
  set_short( "Hallway - x53y15z7" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y16z7.c",
  "south" : DIR+"/rooms/x53y14z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
