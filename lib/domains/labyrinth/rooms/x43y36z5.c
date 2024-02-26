inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 5 }));
  set_short( "Passage - x43y36z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y36z5.c",
  "south" : DIR+"/rooms/x43y35z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
