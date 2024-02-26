inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 9, 1 }));
  set_short( "Corridor - x41y9z1" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y10z1.c",
  "south" : DIR+"/rooms/x41y8z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
