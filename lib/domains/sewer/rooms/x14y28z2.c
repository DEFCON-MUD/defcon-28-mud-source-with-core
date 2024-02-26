inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 28, 2 }));
  set_short( "Hallway - x14y28z2" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y28z2.c",
  "east" : DIR+"/rooms/x15y28z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
