inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 44, 9 }));
  set_short( "Hallway - x58y44z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y44z9.c",
  "east" : DIR+"/rooms/x59y44z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
