inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 63, 2 }));
  set_short( "Hallway - x39y63z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y64z2.c",
  "south" : DIR+"/rooms/x39y62z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
