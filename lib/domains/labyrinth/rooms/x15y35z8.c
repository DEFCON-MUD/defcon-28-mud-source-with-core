inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 35, 8 }));
  set_short( "Passage - x15y35z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y36z8.c",
  "south" : DIR+"/rooms/x15y34z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
