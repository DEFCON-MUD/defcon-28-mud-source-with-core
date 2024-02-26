inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 3 }));
  set_short( "Hallway - x19y24z3" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y24z3.c",
  "east" : DIR+"/rooms/x20y24z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
