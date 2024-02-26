inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 9 }));
  set_short( "Hallway - x49y60z9" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y60z9.c",
  "north" : DIR+"/rooms/x49y61z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
