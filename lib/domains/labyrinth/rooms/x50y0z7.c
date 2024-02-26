inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 7 }));
  set_short( "Hallway - x50y0z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z7.c",
  "east" : DIR+"/rooms/x51y0z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
