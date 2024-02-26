inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 29, 1 }));
  set_short( "Hallway - x13y29z1" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y30z1.c",
  "south" : DIR+"/rooms/x13y28z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
