inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 18, 8 }));
  set_short( "Passage - x4y18z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y18z8.c",
  "east" : DIR+"/rooms/x5y18z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
