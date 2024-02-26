inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 46, 2 }));
  set_short( "Passage - x53y46z2" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "south" : DIR+"/rooms/x53y45z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
