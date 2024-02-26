inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 9 }));
  set_short( "Corridor - x31y24z9" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y24z9.c",
  "south" : DIR+"/rooms/x31y23z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
