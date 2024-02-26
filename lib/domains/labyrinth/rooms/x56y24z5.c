inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 24, 5 }));
  set_short( "Passage - x56y24z5" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y24z5.c",
  "east" : DIR+"/rooms/x57y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
