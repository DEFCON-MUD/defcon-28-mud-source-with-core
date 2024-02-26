inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 36, 1 }));
  set_short( "Hallway - x54y36z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y36z1.c",
  "east" : DIR+"/rooms/x55y36z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
