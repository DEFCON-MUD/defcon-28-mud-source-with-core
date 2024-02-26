inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 9 }));
  set_short( "Hallway - x43y20z9" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y20z9.c",
  "east" : DIR+"/rooms/x44y20z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
