inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 64, 9 }));
  set_short( "Hallway - x27y64z9" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y64z9.c",
  "east" : DIR+"/rooms/x28y64z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
