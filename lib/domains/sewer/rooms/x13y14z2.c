inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 2 }));
  set_short( "Hallway - x13y14z2" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z2.c",
  "south" : DIR+"/rooms/x13y13z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
